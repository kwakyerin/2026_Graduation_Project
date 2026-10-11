// Fill out your copyright notice in the Description page of Project Settings.


#include "yenPathfinder.h"

TArray<FRoutePathResult> yenPathfinder::FindPaths(ARouteGraphManager& GraphManager,int32 StartIndex,int32 GoalIndex,int32 K)
{
    // 최종적으로 채택한 경로 목록
    TArray<FRoutePathResult> AcceptedPaths;

    if (K <= 0)
    {
        return AcceptedPaths;
    }

    // 첫 번째 최소 비용 경로는 기존 A*로 탐색
    const FRoutePathResult FirstPath =
        GraphManager.FindPathAStar(StartIndex, GoalIndex);

    if (!FirstPath.bFound)
    {
        return AcceptedPaths;
    }

    AcceptedPaths.Add(FirstPath);

    // 이후 대체 경로를 탐색하는 Yen 로직 추가

    return AcceptedPaths;
}
