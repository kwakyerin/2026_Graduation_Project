// Fill out your copyright notice in the Description page of Project Settings.


#include "TestProjectile.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"

// Sets default values
ATestProjectile::ATestProjectile()
{
    PrimaryActorTick.bCanEverTick = false;

    // 네트워크 복제(이게 핵심임)
    bReplicates = true;

    //던졌을 때 공 4초 뒤에 없어짐
    InitialLifeSpan = 4.0f;

    // 충돌체 생성
    SphereComponent =
        CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));

    SphereComponent->InitSphereRadius(15.0f);
    SphereComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));

    // SphereComponent가 충돌하면 OnHit 함수 실행(무언가에 충돌하면 함수 실행된다는 뜻)
    SphereComponent->OnComponentHit.AddDynamic(
        this,
        &ATestProjectile::OnHit
    );

    RootComponent = SphereComponent;

    // 보이는 Mesh 생성
    MeshComponent =
        CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

    MeshComponent->SetupAttachment(RootComponent);
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Projectile 이동
    ProjectileMovement =
        CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));

    ProjectileMovement->UpdatedComponent = SphereComponent;

    ProjectileMovement->InitialSpeed = 1500.0f;
    ProjectileMovement->MaxSpeed = 1500.0f;

    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = false;

    // 중력 없이 직선으로 날아가게
    ProjectileMovement->ProjectileGravityScale = 0.0f;
}

// Called when the game starts or when spawned
void ATestProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

//데미지 처리는 서버에서만 이루어지게 하기
void ATestProjectile::OnHit(UPrimitiveComponent* HitComponent,AActor* OtherActor,UPrimitiveComponent* OtherComponent,
    FVector NormalImpulse,
    const FHitResult& Hit)
{
    // Damage 처리는 서버에서만
    if (!HasAuthority())
    {
        return;
    }

    // 자기 자신은 제외
    if (OtherActor && OtherActor != this && OtherActor != GetOwner()){
        UE_LOG( LogTemp, Warning, TEXT("PROJECTILE HIT : %s"),*GetNameSafe(OtherActor));
        UGameplayStatics::ApplyDamage(
            OtherActor,                 // 맞은 Actor
            20.0f,                      // 20씩 데미지 깎이게 하기
            GetInstigatorController(),  // 발사한 플레이어 Controller
            this,                       // Damage를 발생시킨 Actor
            UDamageType::StaticClass()
        );
    }

    //총돌한 위치에 나이아가라 폭발함
    /*if (ExplosionEffect){
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(),ExplosionEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
    }*/

    //멀티캐스트 나이아가라 폭발
    Multicast_ExplosionFX(Hit.ImpactPoint,Hit.ImpactNormal.Rotation());

    // 총알이 벽이나 캐릭터에 맞으면 바로 사라짐
    Destroy();

}

//폭발파티클 멀티캐스트 연결
void ATestProjectile::Multicast_ExplosionFX_Implementation(FVector Location, FRotator Rotation)
{
    //클라 서버 둘 다 작동되는지 확인차 집어넣음
    UE_LOG(
        LogTemp,
        Warning,
        TEXT("MULTICAST EXPLOSION | Authority=%d | Effect=%s"),
        HasAuthority(),
        *GetNameSafe(ExplosionEffect)
    );

    if (ExplosionEffect) {
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(
            GetWorld(),
            ExplosionEffect,
            Location,
            Rotation
        );
    }
}


