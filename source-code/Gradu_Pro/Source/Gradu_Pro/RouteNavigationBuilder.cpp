// Fill out your copyright notice in the Description page of Project Settings.


#include "RouteNavigationBuilder.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "GameFramework/Character.h"

bool RouteNavigationBuilder::Expand(UObject* WorldContextObject,ACharacter* Player,TArray<FRouteNode>& Nodes,TArray<FRouteEdge>& Edges)
{
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetNavigationSystem(WorldContextObject);

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

		if (!NavSys->ProjectPointToNavigation(Nodes[i].WorldLocation, NavLocation, ProjectionExtent, &AgentProps))
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

		if (!Original.bTraversable || !Projected.IsValidIndex(From) || !Projected.IsValidIndex(To) || !Projected[From] ||
			!Projected[To])
		{
			continue;
		}

		UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(WorldContextObject, Nodes[From].WorldLocation,
			Nodes[To].WorldLocation, Player);

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
