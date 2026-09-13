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

public:
	virtual void GetLifetimeReplicatedProps(
		TArray<FLifetimeProperty>& OutLifetimeProps
	) const override;
};