#include "ReplicationPracticeActor.h"

#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "TimerManager.h"

AReplicationPracticeActor::AReplicationPracticeActor()
{
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = true;

	RootComponent =
		CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void AReplicationPracticeActor::BeginPlay()
{
	Super::BeginPlay();

	//2초마다 true 반복 실행
	if (HasAuthority())
	{
		GetWorldTimerManager().SetTimer(TestNumberTimer,this,
			&AReplicationPracticeActor::IncreaseTestNumber,2.0f,true);
	}
}

void AReplicationPracticeActor::IncreaseTestNumber()
{
	TestNumber++;

	UE_LOG(
		LogTemp,
		Warning,
		TEXT("SERVER : TestNumber = %d"),
		TestNumber
	);
}

void AReplicationPracticeActor::OnRep_TestNumber()
{
	UE_LOG(
		LogTemp,
		Warning,
		TEXT("CLIENT : TestNumber = %d"),
		TestNumber
	);
}

void AReplicationPracticeActor::GetLifetimeReplicatedProps(
	TArray<FLifetimeProperty>& OutLifetimeProps
) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AReplicationPracticeActor, TestNumber);
}