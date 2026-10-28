// Copyright Epic Games, Inc. All Rights Reserved.

#include "Gradu_ProCharacter.h"
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
	/*ARouteGraphManager* Manager =Cast<ARouteGraphManager>(
			UGameplayStatics::GetActorOfClass(GetWorld(),ARouteGraphManager::StaticClass())
		);*/

	//경로 관리액터 없을 시 함수종료 
	/*if (!IsValid(Manager))
	{
		UE_LOG(LogTemp, Warning,TEXT("[Route] RouteGraphManager not found"));

		return;
	}*/

	//최대 3개 경로 탐색
	/*TArray<FRoutePathResult> Results = Manager->FindRoutes(this, 3);*/

	//탐색된 경로가 없을 때
	/*if (Results.IsEmpty())
	{
		UE_LOG(LogTemp, Warning,TEXT("[Route] No routes found"));

		return;
	}*/

	//이전 경로 데이터 초기화
	RoutePoints.Empty();

	//첫번째 경로 좌표 저장
	/*for (const FVector& Point : Results[0].PathPoints)
	{
		RoutePoints.Add(FVector_NetQuantize(Point));
	}*/

	//여기까지 나중에 해제(실제 좌표가 없어서 아직 확인x)

	//여기서부터 임시좌표 지정해서 동기화 확인
	FVector Start = GetActorLocation();

	RoutePoints.Add(FVector_NetQuantize(Start));
	RoutePoints.Add(FVector_NetQuantize(Start + FVector(300, 0, 0)));
	RoutePoints.Add(FVector_NetQuantize(Start + FVector(600, 300, 0)));

	//확인로그
	UE_LOG(LogTemp, Warning,TEXT("[SERVER] Route calculated. Points: %d"),RoutePoints.Num());

	ForceNetUpdate();
}

//경로 데이터가 복제되면 클라에서 실행
void AGradu_ProCharacter::OnRep_RoutePoints()
{
	//클라 동기화 확인로그
	UE_LOG(LogTemp, Warning,TEXT("[CLIENT] Route received. Points: %d"),RoutePoints.Num());
	UE_LOG(LogTemp, Warning,TEXT("[Route] HasAuthority=%d, IsLocallyControlled=%d, Points=%d"),
		HasAuthority(),IsLocallyControlled(),RoutePoints.Num());

	//자신이 조종하는 플레이어인지 확인
	if (!IsLocallyControlled())
	{
		return;
	}

	//경로 시각화 함수 호출
	UpdateRouteVisualization();
}

//계산된 경로 화면에 표시
void AGradu_ProCharacter::UpdateRouteVisualization()
{
}

//복제할 변수 등록
void AGradu_ProCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//해당 캐릭터 소유 클라에게만 복제
	DOREPLIFETIME_CONDITION(AGradu_ProCharacter, RoutePoints, COND_OwnerOnly);
}
