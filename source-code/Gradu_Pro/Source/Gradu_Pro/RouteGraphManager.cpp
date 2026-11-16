// Fill out your copyright notice in the Description page of Project Settings.


#include "RouteGraphManager.h"
#include "yenPathfinder.h"
#include "RouteNodeActor.h"
#include "AstarPathfinder.h"
#include "RouteNavigationBuilder.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

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

	ACharacter* Player = UGameplayStatics::GetPlayerCharacter(this, 0);

	const TArray<FRoutePathResult> Results = FindRoutes(Player, 3);

	UE_LOG(LogTemp, Warning, TEXT("[Yen] PathCount=%d"), Results.Num());
}

// Called every frame
void ARouteGraphManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
FRoutePathResult ARouteGraphManager::FindPathAStar(int32 StartIndex,int32 GoalIndex)
{
	const TSet<int32> ExcludedNodes;
	const TSet<int32> ExcludedEdges;

	return FindPathAStarInternal(StartIndex,GoalIndex,ExcludedNodes,ExcludedEdges);
}

FRoutePathResult ARouteGraphManager::FindPathAStarInternal(int32 StartIndex, int32 GoalIndex, 
	const TSet<int32>& ExcludedNodes,const TSet<int32>& ExcludedEdges)
{
	return AstarPathfinder::FindPath(Nodes,Edges,StartIndex,GoalIndex,ExcludedNodes,ExcludedEdges);
}


void ARouteGraphManager::BuildGraphFromActors()
{
	Nodes.Reset();
	Edges.Reset();

	// 등록된 Actor가 모두 유효한지 먼저 확인
	TSet<ARouteNodeActor*> RegisteredActors;

	for (ARouteNodeActor* NodeActor : NodeActors)
	{
		if (!IsValid(NodeActor) || RegisteredActors.Contains(NodeActor))
		{
			UE_LOG(LogTemp, Warning,
				TEXT("[Graph] Invalid or duplicate node actor."));
			return;
		}

		RegisteredActors.Add(NodeActor);
	}

	// 1. Actor 위치를 노드 배열에 저장
	Nodes.SetNum(NodeActors.Num());

	for (int32 i = 0; i < NodeActors.Num(); ++i)
	{
		Nodes[i].WorldLocation = NodeActors[i]->GetActorLocation();
	}

	// 같은 방향의 간선을 중복 생성하지 않도록 추가
	auto AddEdge = [this](int32 From, int32 To, float Speed)
		{
			for (const FRouteEdge& ExistingEdge : Edges)
			{
				if (ExistingEdge.FromNodeIndex == From &&
					ExistingEdge.ToNodeIndex == To)
				{
					return;
				}
			}

			FRouteEdge Edge;
			Edge.FromNodeIndex = From;
			Edge.ToNodeIndex = To;
			Edge.MoveSpeed = Speed;
			Edge.bTraversable = true;

			Edges.Add(Edge);
		};

	// 2. Actor의 연결 정보를 간선 배열에 저장
	for (int32 FromIndex = 0; FromIndex < NodeActors.Num(); ++FromIndex)
	{
		const ARouteNodeActor* NodeActor = NodeActors[FromIndex];

		for (const FRouteNodeConnection& Connection : NodeActor->Connections)
		{
			if (!IsValid(Connection.TargetNode))
			{
				UE_LOG(LogTemp, Warning,
					TEXT("[Graph] Missing target at node %d."), FromIndex);
				continue;
			}

			const int32 ToIndex =
				NodeActors.IndexOfByKey(Connection.TargetNode);

			if (ToIndex == INDEX_NONE || ToIndex == FromIndex)
			{
				UE_LOG(LogTemp, Warning,
					TEXT("[Graph] Invalid connection at node %d."), FromIndex);
				continue;
			}

			if (!FMath::IsFinite(Connection.MoveSpeed) ||
				Connection.MoveSpeed <= 0.0f)
			{
				UE_LOG(LogTemp, Warning,
					TEXT("[Graph] Invalid speed at node %d."), FromIndex);
				continue;
			}

			AddEdge(FromIndex, ToIndex, Connection.MoveSpeed);

			if (Connection.bBidirectional)
			{
				AddEdge(ToIndex, FromIndex, Connection.MoveSpeed);
			}
		}
	}

	UE_LOG(LogTemp, Warning,
		TEXT("[Graph] Nodes=%d, Edges=%d"),
		Nodes.Num(), Edges.Num());
}

TArray<FRoutePathResult> ARouteGraphManager::FindRoutes(ACharacter* Player,int32 K)
{
	BuildGraphFromActors();

	if (!IsValid(StartNodeActor) || !IsValid(GoalNodeActor)|| !IsValid(GoalNodeActor))
	{
		return TArray<FRoutePathResult>();
	}

	const int32 StartIndex = AddPlayerStartNode(Player);
		

	const int32 GoalIndex =NodeActors.IndexOfByKey(GoalNodeActor);

	if (!Nodes.IsValidIndex(StartIndex) || !Nodes.IsValidIndex(GoalIndex))
	{
		return TArray<FRoutePathResult>();
	}

	if (!ExpandGraphEdgesWithNavigation(Player))
	{
		return {};
	}

	return yenPathfinder::FindPaths(*this, StartIndex, GoalIndex, K);
}

int32 ARouteGraphManager::AddPlayerStartNode(ACharacter* Player)
{
	// 플레이어와 연결할 노드 확인
	if (!IsValid(Player) || !IsValid(StartNodeActor))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[Graph] Player or StartNodeActor is missing."));
		return INDEX_NONE;
	}

	// StartNodeActor가 그래프에서 몇 번째 노드인지 확인
	const int32 EntryIndex = NodeActors.IndexOfByKey(StartNodeActor);

	if (!Nodes.IsValidIndex(EntryIndex))
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[Graph] Entry node is invalid."));
		return INDEX_NONE;
	}

	// 발밑 위치 계산
	const UCapsuleComponent* Capsule = Player->GetCapsuleComponent();

	const FVector FootLocation =
		Capsule->GetComponentLocation()
		- FVector(
			0.0f,
			0.0f,
			Capsule->GetScaledCapsuleHalfHeight());

	// 연결 구간의 이동속도
	const float MoveSpeed =
		Player->GetCharacterMovement()->MaxWalkSpeed;

	if (!FMath::IsFinite(MoveSpeed) || MoveSpeed <= 0.0f)
	{
		return INDEX_NONE;
	}

	// 발밑 위치를 새 노드로 추가
	FRouteNode PlayerNode;
	PlayerNode.WorldLocation = FootLocation;

	const int32 PlayerStartIndex = Nodes.Add(PlayerNode);

	// 발밑에서 StartNode로 이어지는 간선 추가
	FRouteEdge EntryEdge;
	EntryEdge.FromNodeIndex = PlayerStartIndex;
	EntryEdge.ToNodeIndex = EntryIndex;
	EntryEdge.MoveSpeed = MoveSpeed;
	EntryEdge.bTraversable = true;

	Edges.Add(EntryEdge);

	UE_LOG(LogTemp, Warning,
		TEXT("[Graph] PlayerStart=%d, Entry=%d, Foot=%s"),
		PlayerStartIndex,
		EntryIndex,
		*FootLocation.ToString());

	return PlayerStartIndex;
}

bool ARouteGraphManager::ExpandGraphEdgesWithNavigation(ACharacter* Player)
{
	return RouteNavigationBuilder::Expand(this,Player,Nodes,Edges);
}