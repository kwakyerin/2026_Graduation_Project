// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CargoActor.h"
#include "FragileCargoActor.generated.h"

/**
 * 
 */
UCLASS()
class TEST_01_API AFragileCargoActor : public ACargoActor
{
	GENERATED_BODY()

public:
	AFragileCargoActor();

protected:

	//나중에 충돌 감지 이벤트 사용해주기(꼭 필요x)
	virtual void BeginPlay() override;
	
	//화물 충돌 감지
	UFUNCTION()
	void OnCargoHit(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		FVector NormalImpulse,
		const FHitResult& Hit
	);

	//파손됐는지 검사
	bool CheckBreakCondition(const FVector& ImpactVelocity) const;

	//파손된 화물이 맞는지 검사
	void BreakCargo();

	//파손 여부
	UPROPERTY(Replicated)
	bool bIsBroken = false;

	//떨어지는 속도

	//파손 후 제거

public:
	virtual void GetLifetimeReplicatedProps(
		TArray<FLifetimeProperty>& OutLifetimeProps
	) const override;
};
