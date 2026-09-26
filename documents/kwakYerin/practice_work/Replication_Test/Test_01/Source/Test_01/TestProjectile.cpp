// Fill out your copyright notice in the Description page of Project Settings.


#include "TestProjectile.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATestProjectile::ATestProjectile()
{
    PrimaryActorTick.bCanEverTick = false;

    // 네트워크 복제(이게 핵심임)
    bReplicates = true;

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

}

////일단 damage 안넣고 테스트 용으로 로그만 찍어보기
//void ATestProjectile::OnHit(UPrimitiveComponent* HitComponent,AActor* OtherActor,
//    UPrimitiveComponent* OtherComponent,
//    FVector NormalImpulse,
//    const FHitResult& Hit)
//{
//    if (!HasAuthority())
//    {
//        return;
//    }
//
//    UE_LOG(LogTemp, Warning, TEXT("PROJECTILE HIT : %s"), *GetNameSafe(OtherActor));
//}


