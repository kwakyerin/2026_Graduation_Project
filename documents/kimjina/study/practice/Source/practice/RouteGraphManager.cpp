// Fill out your copyright notice in the Description page of Project Settings.


#include "RouteGraphManager.h"

// Sets default values
ARouteGraphManager::ARouteGraphManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARouteGraphManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARouteGraphManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FRoutePathResult ARouteGraphManager::FindPathAStar(int32 StartIndex, int32 GoalIndex)
{
	FRoutePathResult Result;
	if (!Nodes.IsValidIndex(StartIndex) ||!Nodes.IsValidIndex(GoalIndex))
	{
		return Result;
	}
	return Result;
}
