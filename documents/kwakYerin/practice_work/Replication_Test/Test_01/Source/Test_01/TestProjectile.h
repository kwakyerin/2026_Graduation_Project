// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestProjectile.generated.h"

class ATestProjectile;
class USphereComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;

UCLASS()

class TEST_01_API ATestProjectile : public AActor
{
    GENERATED_BODY()

public:
    ATestProjectile();

protected:
    virtual void BeginPlay() override;

    // 충돌 판정
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
    USphereComponent* SphereComponent;

    // 눈에 보이는 Projectile
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
    UStaticMeshComponent* MeshComponent;

    // Projectile 이동 담당
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
    UProjectileMovementComponent* ProjectileMovement;

};
