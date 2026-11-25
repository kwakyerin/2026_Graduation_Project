// Fill out your copyright notice in the Description page of Project Settings.


#include "BeePawn.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "BeeAIController.h"

// Sets default values
ABeePawn::ABeePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));

    CollisionSphere->InitSphereRadius(20.0f);
    CollisionSphere->SetCollisionProfileName(TEXT("Pawn"));

    SetRootComponent(CollisionSphere);

    // 외형 컴포넌트 생성
    BeeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BeeMesh"));

    BeeMesh->SetupAttachment(CollisionSphere);
    BeeMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // 이동 컴포넌트 생성
    FlightMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FlightMovement"));

    FlightMovement->SetUpdatedComponent(CollisionSphere);

    // 테스트용 값
    FlightMovement->MaxSpeed = 300.0f;
    FlightMovement->Acceleration = 600.0f;
    FlightMovement->Deceleration = 600.0f;

    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    AIControllerClass = ABeeAIController::StaticClass();
}

// Called when the game starts or when spawned
void ABeePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABeePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABeePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

