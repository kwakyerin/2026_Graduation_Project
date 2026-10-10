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
	Nodes.Reset();
	Edges.Reset();

	// 노드 3개 생성
	Nodes.SetNum(3);

	Nodes[0].WorldLocation = FVector(0, 0, 0);
	Nodes[1].WorldLocation = FVector(300, 400, 0);
	Nodes[2].WorldLocation = FVector(600, 0, 0);

	// 0 → 2: 거리 600cm / 속도 100cm/s = 6초
	FRouteEdge DirectEdge;
	DirectEdge.FromNodeIndex = 0;
	DirectEdge.ToNodeIndex = 2;
	DirectEdge.MoveSpeed = 100.0f;
	Edges.Add(DirectEdge);

	// 0 → 1: 거리 500cm / 속도 500cm/s = 1초
	FRouteEdge FirstEdge;
	FirstEdge.FromNodeIndex = 0;
	FirstEdge.ToNodeIndex = 1;
	FirstEdge.MoveSpeed = 500.0f;
	Edges.Add(FirstEdge);

	// 1 → 2: 거리 500cm / 속도 500cm/s = 1초
	FRouteEdge SecondEdge;
	SecondEdge.FromNodeIndex = 1;
	SecondEdge.ToNodeIndex = 2;
	SecondEdge.MoveSpeed = 500.0f;
	Edges.Add(SecondEdge);

	FindPathAStar(0, 2);
	
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
			UE_LOG(LogTemp, Warning,
				TEXT("[AStar] Goal reached! Node=%d, TotalTime=%.2f seconds"),
				CurrentIndex,
				GCosts[CurrentIndex]);

			break;
		}
		// 현재 노드에서 출발하는 간선들을 확인
		for (int32 EdgeIndex = 0; EdgeIndex < Edges.Num(); ++EdgeIndex)
		{
			const FRouteEdge& Edge = Edges[EdgeIndex];

			// 통행 불가이거나 현재 노드에서 출발하지 않는 간선은 제외
			if (!Edge.bTraversable ||Edge.FromNodeIndex != CurrentIndex)
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
