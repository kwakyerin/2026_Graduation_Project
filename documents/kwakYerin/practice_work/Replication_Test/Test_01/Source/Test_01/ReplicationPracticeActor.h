#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReplicationPracticeActor.generated.h"

UCLASS()
class TEST_01_API AReplicationPracticeActor : public AActor
{
	GENERATED_BODY()

public:
	AReplicationPracticeActor();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(ReplicatedUsing = OnRep_TestNumber)
	int32 TestNumber = 0;

	UFUNCTION()
	void OnRep_TestNumber();

	//repnotify 반응 확인
	// 서버에서 TestNumber를 증가시킬 함수
	void IncreaseTestNumber();

	// 2초마다 함수를 실행하기 위한 타이머
	FTimerHandle TestNumberTimer;

public:
	virtual void GetLifetimeReplicatedProps(
		TArray<FLifetimeProperty>& OutLifetimeProps
	) const override;
};