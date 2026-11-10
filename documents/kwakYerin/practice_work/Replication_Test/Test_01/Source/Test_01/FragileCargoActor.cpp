// Fill out your copyright notice in the Description page of Project Settings.


#include "FragileCargoActor.h"

AFragileCargoActor::AFragileCargoActor()
{
}

void AFragileCargoActor::BeginPlay()
{
    //부모 클래스 함수 먼저 실행하기
	Super::BeginPlay();

    UE_LOG(LogTemp, Warning,TEXT("FRAGILE BEGINPLAY"));

    if (BoxComponent)
    {
        //박스 컴포넌트 충돌 시 oncargohit발생
        BoxComponent->OnComponentHit.AddDynamic(this, &AFragileCargoActor::OnCargoHit);

        UE_LOG(LogTemp, Warning,TEXT("HIT EVENT REGISTERED"));
    }
}

//화물 충돌 감지
void AFragileCargoActor::OnCargoHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if (!HasAuthority()) return;

    //로그 아직 작동x
    UE_LOG(LogTemp, Warning,TEXT("FRAGILE CARGO HIT | Other=%s"),*GetNameSafe(OtherActor));
}

//파손됐는지 검사
bool AFragileCargoActor::CheckBreakCondition(const FVector& ImpactVelocity) const
{
	return false;
}

//파손된 화물이 맞는지 검사
void AFragileCargoActor::BreakCargo()
{
}

void AFragileCargoActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
}
