// Copyright Epic Games, Inc. All Rights Reserved.

#include "Gradu_ProCharacter.h"
#include "DrawDebugHelpers.h"
#include "RouteGraphManager.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Gradu_Pro.h"

AGradu_ProCharacter::AGradu_ProCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 500.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AGradu_ProCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGradu_ProCharacter::Move);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &AGradu_ProCharacter::Look);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGradu_ProCharacter::Look);
	}
	else
	{
		UE_LOG(LogGradu_Pro, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AGradu_ProCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	// route the input
	DoMove(MovementVector.X, MovementVector.Y);
}

void AGradu_ProCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	// route the input
	DoLook(LookAxisVector.X, LookAxisVector.Y);
}

void AGradu_ProCharacter::DoMove(float Right, float Forward)
{
	if (GetController() != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = GetController()->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, Forward);
		AddMovementInput(RightDirection, Right);
	}
}

void AGradu_ProCharacter::DoLook(float Yaw, float Pitch)
{
	if (GetController() != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void AGradu_ProCharacter::DoJumpStart()
{
	// signal the character to jump
	Jump();
}

void AGradu_ProCharacter::DoJumpEnd()
{
	// signal the character to stop jumping
	StopJumping();
}


//여기서부터 동기화 설정 시작

//AI 경로 요청
void AGradu_ProCharacter::RequestRoute()
{
	if (!IsLocallyControlled())
	{
		return;
	}

	Server_RequestRoute();
}

//클라 요청 받아서 서버에서 경로 계산
void AGradu_ProCharacter::Server_RequestRoute_Implementation()
{
	if (!HasAuthority())
	{
		return;
	}

	//맵에 배치된 경로관리 액처 찾기
	ARouteGraphManager* Manager =Cast<ARouteGraphManager>(
			UGameplayStatics::GetActorOfClass(GetWorld(),ARouteGraphManager::StaticClass())
		);

	//경로 관리액터 없을 시 함수종료 
	if (!IsValid(Manager))
	{
		UE_LOG(LogTemp, Warning,TEXT("[Route] RouteGraphManager not found"));

		return;
	}

	//경로 
	TArray<FRoutePathResult> Results = Manager->FindRoutes(this, 3);

	//탐색된 경로가 없을 때
	if (Results.IsEmpty())
	{
		UE_LOG(LogTemp, Warning,TEXT("[Route] No routes found"));

		return;
	}

	//이전 경로 데이터 초기화
	ReplicatedRoutes.Points.Empty();
	ReplicatedRoutes.PathLengths.Empty();

	//탐색된 경로들을 순서대로 저장
	for (const FRoutePathResult& Route : Results)
	{
		//유효하지 않은 경로는 제외
		if (!Route.bFound || Route.PathPoints.IsEmpty())
		{
			continue;
		}

		//현재 경로의 좌표 개수 저장
		ReplicatedRoutes.PathLengths.Add(Route.PathPoints.Num());

		//현재 경로의 모든 좌표 저장
		for (const FVector& Point : Route.PathPoints)
		{
			ReplicatedRoutes.Points.Add(FVector_NetQuantize(Point));
		}
	}

	//서버에 저장된 데이터 확인
	UE_LOG(LogTemp, Warning,TEXT("[SERVER] Routes=%d, TotalPoints=%d"),ReplicatedRoutes.PathLengths.Num(),
		ReplicatedRoutes.Points.Num());

	//호스트가 조종하는 캐릭터라면 직접 시각화
	if (IsLocallyControlled())
	{
		UpdateRouteVisualization();
	}


	//서버 데이터 확인 로그
	for (int32 i = 0;i < ReplicatedRoutes.PathLengths.Num();i++)
	{
		UE_LOG(LogTemp, Warning,TEXT("[SERVER] Route[%d] PointCount=%d"),i + 1,ReplicatedRoutes.PathLengths[i]);
	}

	for (int32 i = 0;i < ReplicatedRoutes.Points.Num();i++)
	{
		UE_LOG(LogTemp, Warning,TEXT("[SERVER] Point[%d]=%s"),i,*ReplicatedRoutes.Points[i].ToString());
	}

	ForceNetUpdate();

	//여기까지 나중에 해제(실제 좌표가 없어서 아직 확인x)

	//여기서부터 임시좌표 지정해서 동기화 확인
	/*FVector Start = GetActorLocation();

	RoutePoints.Add(FVector_NetQuantize(Start));
	RoutePoints.Add(FVector_NetQuantize(Start + FVector(300, 0, 0)));
	RoutePoints.Add(FVector_NetQuantize(Start + FVector(600, 300, 0)));*/

	//자신이 조종하는 캐릭터 경로만 시각화
	/*if (IsLocallyControlled())
	{
		UpdateRouteVisualization();
	}*/
	UE_LOG(LogTemp, Warning,TEXT("[SERVER] IsLocallyControlled=%d"),IsLocallyControlled());

	ForceNetUpdate();
}

//경로 데이터가 복제되면 클라에서 실행
void AGradu_ProCharacter::OnRep_Routes()
{
	//클라 동기화 확인로그
	UE_LOG(LogTemp, Warning,TEXT("[CLIENT] Routes=%d, Points=%d"),ReplicatedRoutes.PathLengths.Num(),
		ReplicatedRoutes.Points.Num());

	//경로별 좌표 갯수
	for (int32 i = 0;i < ReplicatedRoutes.PathLengths.Num();i++)
	{
		UE_LOG(LogTemp, Warning,TEXT("[CLIENT] Route[%d] PointCount=%d"),i + 1,ReplicatedRoutes.PathLengths[i]);
	}


	//클라에서 받은 모든 좌표 출력로그
	for (int32 i = 0;i < ReplicatedRoutes.Points.Num();i++)
	{
		UE_LOG(LogTemp, Warning,TEXT("[CLIENT] Point[%d]=%s"),i,*ReplicatedRoutes.Points[i].ToString());
	}

	//자신이 조종하는 캐릭터 경로만 시각화
	if (!IsLocallyControlled())
	{
		return;
	}

	//경로 시각화 함수 호출
	UpdateRouteVisualization();
}

//계산된 경로 화면에 표시
// 계산된 여러 경로 화면에 표시
void AGradu_ProCharacter::UpdateRouteVisualization()
{
	UWorld* World = GetWorld();

	if (!World)
	{
		return;
	}

	// 경로별 색상
	const FColor RouteColors[3] = {
		FColor::Green,
		FColor::Blue,
		FColor::Yellow
	};

	// 현재 경로가 시작하는 배열 위치
	int32 StartIndex = 0;

	// 저장된 경로 개수만큼 반복
	for (int32 RouteIndex = 0;
		RouteIndex < ReplicatedRoutes.PathLengths.Num();
		RouteIndex++)
	{
		// 현재 경로의 좌표 개수
		const int32 PointCount =
			ReplicatedRoutes.PathLengths[RouteIndex];

		// 배열 범위를 벗어나지 않도록 확인
		if (PointCount <= 0 ||StartIndex > ReplicatedRoutes.Points.Num() ||
			PointCount > ReplicatedRoutes.Points.Num() - StartIndex)
		{
			UE_LOG(LogTemp, Warning,TEXT("[Route] Invalid path data"));
			return;
		}

		// 현재 경로 색상
		const FColor Color = RouteColors[RouteIndex % 3];

		// 현재 경로의 모든 좌표 순회
		for (int32 i = 0; i < PointCount; i++)
		{
			FVector Start =FVector(ReplicatedRoutes.Points[StartIndex + i])+ FVector(0, 0, 20);

			// 좌표마다 빨간 구 표시
			DrawDebugSphere(World,Start,30.0f,12,FColor::Red,false,30.0f);

			//다음 좌표가 있으면 선으로 연결
			if (i < PointCount - 1)
			{
				FVector End =FVector(ReplicatedRoutes.Points[StartIndex + i + 1])+FVector(0, 0, 20);

				DrawDebugLine(World,Start,End,Color,false,30.0f,0,10.0f);
			}
		}

		UE_LOG(LogTemp, Warning,TEXT("[Route] Path %d visualized. Points=%d"),RouteIndex + 1,PointCount);

		//다음 경로의 시작 위치로 이동
		StartIndex += PointCount;
	}
}

//복제할 변수 등록
void AGradu_ProCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//해당 캐릭터 소유 클라에게만 복제
	DOREPLIFETIME_CONDITION(AGradu_ProCharacter, ReplicatedRoutes, COND_OwnerOnly);
}
