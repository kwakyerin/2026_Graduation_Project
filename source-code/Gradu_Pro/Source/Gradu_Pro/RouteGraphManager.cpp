// Fill out your copyright notice in the Description page of Project Settings.


#include "RouteGraphManager.h"
#include "Algo/Reverse.h"
#include "yenPathfinder.h"
#include "RouteNodeActor.h"

#include "NavigationSystem.h"
#include "NavigationPath.h"

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
	FRoutePathResult Result;
	if (!Nodes.IsValidIndex(StartIndex) ||!Nodes.IsValidIndex(GoalIndex))
	{
		return Result;
	}

	if (ExcludedNodes.Contains(StartIndex) ||ExcludedNodes.Contains(GoalIndex))
	{
		return Result;
	}

	//최소 이동 시간 g값 노드별로 저장할 배열
	TArray<float> GCosts;
	GCosts.Init(TNumericLimits<float>::Max(), Nodes.Num());

	GCosts[StartIndex] = 0.0f;

	// 각 노드에 도착할 때 사용한 간선 번호
	TArray<int32> PreviousEdges;
	PreviousEdges.Init(-1, Nodes.Num());

	// 앞으로 탐색할 후보 노드 번호
	TArray<int32> OpenNodes;

	// 출발 노드부터 탐색 시작
	OpenNodes.Add(StartIndex);
	float MaxSpeed = 0.0f;

	for (const FRouteEdge& Edge : Edges)
	{
		// 통행할 수 없는 간선은 제외
		if (!Edge.bTraversable)
		{
			continue;
		}

		// 연결된 노드가 실제로 존재하는지 검사
		if (!Nodes.IsValidIndex(Edge.FromNodeIndex) ||
			!Nodes.IsValidIndex(Edge.ToNodeIndex))
		{
			return Result;
		}
		//속도는 양수
		if (!FMath::IsFinite(Edge.MoveSpeed) ||
			Edge.MoveSpeed <= 0.0f)
		{
			return Result;
		}
		//현재까지 찾은 최대 속도와 이번 간선 속도 비교해서 더 큰값으로 
		MaxSpeed = FMath::Max(MaxSpeed, Edge.MoveSpeed);
	}

	while (OpenNodes.Num() > 0)
	{
		int32 BestOpenIndex = 0;
		float BestF = TNumericLimits<float>::Max();

		// 후보들의 f값을 비교
		for (int32 i = 0; i < OpenNodes.Num(); ++i)
		{
			const int32 NodeIndex = OpenNodes[i];
			const float H = CalculateHeuristic(NodeIndex, GoalIndex, MaxSpeed);
			const float F = GCosts[NodeIndex] + H;

			if (F < BestF)
			{
				BestF = F;
				BestOpenIndex = i;
			}
		}

		// 가장 작은 f값을 가진 노드를 선택하고 후보 목록에서 제거
		const int32 CurrentIndex = OpenNodes[BestOpenIndex];
		OpenNodes.RemoveAt(BestOpenIndex);

		UE_LOG(LogTemp, Warning,TEXT("[AStar] Select Node=%d, G=%.2f, F=%.2f"),CurrentIndex,GCosts[CurrentIndex],BestF);
		if (CurrentIndex == GoalIndex)
		{
			TArray<int32> ReversedNodes;
			TArray<int32> ReversedEdges;

			int32 TraceIndex = GoalIndex;
			ReversedNodes.Add(TraceIndex);

			// 목적지에서 출발점까지 역추적
			while (TraceIndex != StartIndex)
			{
				const int32 PreviousEdgeIndex = PreviousEdges[TraceIndex];

				// 잘못된 기록이나 순환에 대한 방어 처리
				if (!Edges.IsValidIndex(PreviousEdgeIndex) ||ReversedEdges.Num() >= Nodes.Num())
				{
					return Result;
				}

				const FRouteEdge& PreviousEdge = Edges[PreviousEdgeIndex];

				if (PreviousEdge.ToNodeIndex != TraceIndex ||!Nodes.IsValidIndex(PreviousEdge.FromNodeIndex))
				{
					return Result;
				}

				// 현재 노드로 들어온 간선 저장
				ReversedEdges.Add(PreviousEdgeIndex);

				// 그 간선의 출발 노드로 이동
				TraceIndex = PreviousEdge.FromNodeIndex;
				ReversedNodes.Add(TraceIndex);
			}

			// 출발점 → 목적지 순서로 변경
			Algo::Reverse(ReversedNodes);
			Algo::Reverse(ReversedEdges);

			// 결과 구조체에 저장
			Result.NodeIndices = ReversedNodes;
			Result.EdgeIndices = ReversedEdges;
			Result.TotalTime = GCosts[GoalIndex];

			for (int32 NodeIndex : Result.NodeIndices)
			{
				Result.PathPoints.Add(Nodes[NodeIndex].WorldLocation);
			}

			Result.bFound = true;
			return Result;
		}

		// 현재 노드에서 출발하는 간선들을 확인
		for (int32 EdgeIndex = 0; EdgeIndex < Edges.Num(); ++EdgeIndex)
		{
			const FRouteEdge& Edge = Edges[EdgeIndex];

			// 통행 불가이거나 현재 노드에서 출발하지 않는 간선은 제외
			if (!Edge.bTraversable ||Edge.FromNodeIndex != CurrentIndex|| 
				ExcludedEdges.Contains(EdgeIndex) || ExcludedNodes.Contains(Edge.ToNodeIndex))
			{
				continue;
			}

			const int32 NextIndex = Edge.ToNodeIndex;

			// 첫 테스트에서는 두 노드 사이를 직선으로 이동한다고 가정
			const double Distance = FVector::Dist(Nodes[CurrentIndex].WorldLocation,Nodes[NextIndex].WorldLocation);

			const float TravelTime =static_cast<float>(Distance / Edge.MoveSpeed);

			// 현재까지의 시간 + 다음 구간의 시간
			const float NewG = GCosts[CurrentIndex] + TravelTime;

			// 기존 기록보다 빠른 경로를 발견한 경우에만 갱신
			if (NewG < GCosts[NextIndex])
			{
				GCosts[NextIndex] = NewG;
				PreviousEdges[NextIndex] = EdgeIndex;

				// 탐색 후보에 추가하되 중복은 방지
				OpenNodes.AddUnique(NextIndex);
				UE_LOG(LogTemp, Warning,TEXT("[AStar] Update %d -> %d, Edge=%d, NewG=%.2f"),CurrentIndex,NextIndex,EdgeIndex,NewG);
			}
		}
	}
	return Result;
}

float ARouteGraphManager::CalculateHeuristic(int32 NodeIndex, int32 GoalIndex, float MaxSpeed) const
{
	// 최대 속도를 못구했으면 휴리스틱을 0으로 처리
	if (!FMath::IsFinite(MaxSpeed) || MaxSpeed <= 0.0f)
	{
		return 0.0f;
	}

	const double Distance = FVector::Dist(Nodes[NodeIndex].WorldLocation,Nodes[GoalIndex].WorldLocation);

	return static_cast<float>(Distance / MaxSpeed);
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
		

	const int32 GoalIndex =
		NodeActors.IndexOfByKey(GoalNodeActor);

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
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetNavigationSystem(this);

	if (!IsValid(Player) || !NavSys)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("[GraphNav] Player or NavigationSystem missing"));
		return false;
	}

	const FNavAgentProperties& AgentProps = Player->GetNavAgentPropertiesRef();

	const int32 OriginalNodeCount = Nodes.Num();

	TArray<bool> Projected;
	Projected.Init(false, OriginalNodeCount);

	// 모든 원래 노드의 좌표를 먼저 NavMesh에 맞춤.
	// 현재처럼 바닥 위에 배치된 노드를 위한 투영 범위.
	// 액터 위치는 변경하지 않고 런타임 그래프 좌표만 변경.
	const FVector ProjectionExtent(10.0f, 10.0f, 100.0f);

	for (int32 i = 0; i < OriginalNodeCount; ++i)
	{
		FNavLocation NavLocation;

		if (!NavSys->ProjectPointToNavigation(Nodes[i].WorldLocation,NavLocation,ProjectionExtent,&AgentProps))
		{
			UE_LOG(LogTemp, Warning,
				TEXT("[GraphNav] Node %d projection failed"), i);
			continue;
		}

		Nodes[i].WorldLocation = NavLocation.Location;
		Projected[i] = true;
	}

	// 기존 직선 간선을 보관하고, 출력 간선은 새로 구성.
	TArray<FRouteEdge> OriginalEdges = MoveTemp(Edges);
	Edges.Reset();

	for (const FRouteEdge& Original : OriginalEdges)
	{
		const int32 From = Original.FromNodeIndex;
		const int32 To = Original.ToNodeIndex;

		if (!Original.bTraversable ||!Projected.IsValidIndex(From) ||!Projected.IsValidIndex(To) ||!Projected[From] ||
			!Projected[To])
		{
			continue;
		}

		UNavigationPath* NavPath =UNavigationSystemV1::FindPathToLocationSynchronously(this,Nodes[From].WorldLocation,
			Nodes[To].WorldLocation,Player);

		if (!IsValid(NavPath) ||
			!NavPath->IsValid() ||
			NavPath->IsPartial() ||
			NavPath->PathPoints.Num() < 2)
		{
			UE_LOG(LogTemp, Warning,
				TEXT("[GraphNav] Path failed: %d -> %d"), From, To);
			continue;
		}

		const TArray<FVector>& Points = NavPath->PathPoints;

		// 위에서 투영한 좌표와 실제 경로 끝점이 맞는지 확인.
		if (!Points[0].Equals(Nodes[From].WorldLocation, 10.0f) || !Points.Last().Equals(Nodes[To].WorldLocation, 10.0f))
		{
			UE_LOG(LogTemp, Warning,
				TEXT("[GraphNav] Endpoint mismatch: %d -> %d"),
				From, To);
			continue;
		}

		int32 PreviousIndex = From;

		for (int32 i = 1; i < Points.Num(); ++i)
		{
			int32 NextIndex = To;

			if (i < Points.Num() - 1)
			{
				FRouteNode Corner;
				Corner.WorldLocation = Points[i];
				NextIndex = Nodes.Add(Corner);
			}

			// 원래 연결의 이동 속도를 모든 우회 구간에 유지.
			FRouteEdge Segment = Original;
			Segment.FromNodeIndex = PreviousIndex;
			Segment.ToNodeIndex = NextIndex;

			Edges.Add(Segment);
			PreviousIndex = NextIndex;
		}
	}

	UE_LOG(LogTemp, Warning,
		TEXT("[GraphNav] Edges: %d -> %d"),
		OriginalEdges.Num(), Edges.Num());

	return true;
}