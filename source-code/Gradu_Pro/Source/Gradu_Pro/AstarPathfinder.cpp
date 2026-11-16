// Fill out your copyright notice in the Description page of Project Settings.


#include "AstarPathfinder.h"
#include "Algo/Reverse.h"


FRoutePathResult AstarPathfinder::FindPath(const TArray<FRouteNode>& Nodes,const TArray<FRouteEdge>& Edges,
    int32 StartIndex,
    int32 GoalIndex,
    const TSet<int32>& ExcludedNodes,
    const TSet<int32>& ExcludedEdges)
{
	FRoutePathResult Result;
	if (!Nodes.IsValidIndex(StartIndex) || !Nodes.IsValidIndex(GoalIndex))
	{
		return Result;
	}

	if (ExcludedNodes.Contains(StartIndex) || ExcludedNodes.Contains(GoalIndex))
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
			const float H = CalculateHeuristic(Nodes,NodeIndex, GoalIndex, MaxSpeed);
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

		UE_LOG(LogTemp, Warning, TEXT("[AStar] Select Node=%d, G=%.2f, F=%.2f"), CurrentIndex, GCosts[CurrentIndex], BestF);
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
				if (!Edges.IsValidIndex(PreviousEdgeIndex) || ReversedEdges.Num() >= Nodes.Num())
				{
					return Result;
				}

				const FRouteEdge& PreviousEdge = Edges[PreviousEdgeIndex];

				if (PreviousEdge.ToNodeIndex != TraceIndex || !Nodes.IsValidIndex(PreviousEdge.FromNodeIndex))
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
			if (!Edge.bTraversable || Edge.FromNodeIndex != CurrentIndex ||
				ExcludedEdges.Contains(EdgeIndex) || ExcludedNodes.Contains(Edge.ToNodeIndex))
			{
				continue;
			}

			const int32 NextIndex = Edge.ToNodeIndex;

			// 첫 테스트에서는 두 노드 사이를 직선으로 이동한다고 가정
			const double Distance = FVector::Dist(Nodes[CurrentIndex].WorldLocation, Nodes[NextIndex].WorldLocation);

			const float TravelTime = static_cast<float>(Distance / Edge.MoveSpeed);

			// 현재까지의 시간 + 다음 구간의 시간
			const float NewG = GCosts[CurrentIndex] + TravelTime;

			// 기존 기록보다 빠른 경로를 발견한 경우에만 갱신
			if (NewG < GCosts[NextIndex])
			{
				GCosts[NextIndex] = NewG;
				PreviousEdges[NextIndex] = EdgeIndex;

				// 탐색 후보에 추가하되 중복은 방지
				OpenNodes.AddUnique(NextIndex);
				UE_LOG(LogTemp, Warning, TEXT("[AStar] Update %d -> %d, Edge=%d, NewG=%.2f"), CurrentIndex, NextIndex, EdgeIndex, NewG);
			}
		}
	}
	return Result;
}

float AstarPathfinder::CalculateHeuristic(const TArray<FRouteNode>& Nodes,int32 NodeIndex,int32 GoalIndex,float MaxSpeed)
{
	if (!FMath::IsFinite(MaxSpeed) || MaxSpeed <= 0.0f)
	{
		return 0.0f;
	}

	const double Distance = FVector::Dist(
		Nodes[NodeIndex].WorldLocation,
		Nodes[GoalIndex].WorldLocation);

	return static_cast<float>(Distance / MaxSpeed);
}