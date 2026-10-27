// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BeePawn.generated.h"
class USphereComponent;
class UStaticMeshComponent;
class UFloatingPawnMovement;

UCLASS()
class PRACTICE_API ABeePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABeePawn();

	// 충돌 범위
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bee")
	USphereComponent* CollisionSphere;

	// 벌의 외형
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bee")
	UStaticMeshComponent* BeeMesh;

	// 비행
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bee")
	UFloatingPawnMovement* FlightMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
