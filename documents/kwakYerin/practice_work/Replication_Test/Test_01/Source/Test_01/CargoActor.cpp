// Fill out your copyright notice in the Description page of Project Settings.


#include "CargoActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ACargoActor::ACargoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//네트워크 설정
	bReplicates = true;
	SetReplicateMovement(true);

	//화물 충돌 설정
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("boxcomponent"));
	RootComponent = BoxComponent;

	//화물 모습
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("meshcomponent"));
	MeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACargoActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACargoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACargoActor::SetIsCarried(bool bNewIsCarried)
{
	if (HasAuthority()) {
		bIsCarried = bNewIsCarried;

		UE_LOG(LogTemp,Warning,TEXT("SERVER : Cargo IsCarried = %d"),bIsCarried);
	}
}

void ACargoActor::OnRep_IsCarried()
{
	UE_LOG(LogTemp, Warning, TEXT("Client : Cargo isCarried = %d"), bIsCarried);
}

void ACargoActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACargoActor, bIsCarried);
}
