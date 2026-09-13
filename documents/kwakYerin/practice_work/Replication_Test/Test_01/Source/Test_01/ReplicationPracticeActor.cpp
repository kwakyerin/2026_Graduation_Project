#include "ReplicationPracticeActor.h"

#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"

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

	if (HasAuthority())
	{
		TestNumber = 100;

		UE_LOG(
			LogTemp,
			Warning,
			TEXT("SERVER : TestNumber = %d"),
			TestNumber
		);
	}
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