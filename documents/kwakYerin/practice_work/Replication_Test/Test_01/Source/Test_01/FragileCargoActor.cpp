// Fill out your copyright notice in the Description page of Project Settings.


#include "FragileCargoActor.h"

AFragileCargoActor::AFragileCargoActor()
{
}

void AFragileCargoActor::BeginPlay()
{
}

//화물 충돌 감지
void AFragileCargoActor::OnCargoHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
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
