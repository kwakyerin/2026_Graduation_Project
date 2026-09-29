// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraSystem.h"
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

    // Projectile 충돌 시 호출
    UFUNCTION()
    void OnHit(
        UPrimitiveComponent* HitComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComponent,
        FVector NormalImpulse,
        const FHitResult& Hit
    );

    // 폭발 이펙트를 서버와 클라이언트에서 실행
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ExplosionFX(FVector Location, FRotator Rotation);

    // 충돌 판정
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
    USphereComponent* SphereComponent;

    // 눈에 보이는 Projectile
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
    UStaticMeshComponent* MeshComponent;

    // Projectile 이동 담당
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
    UProjectileMovementComponent* ProjectileMovement;

    //나이아가라 설정
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effects")
    UNiagaraSystem* ExplosionEffect;

};
