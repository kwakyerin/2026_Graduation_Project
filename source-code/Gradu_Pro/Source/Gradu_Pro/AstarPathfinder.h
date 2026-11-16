// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RouteTypes.h"
/**
 * 
 */
class GRADU_PRO_API AstarPathfinder
{
public:
    static FRoutePathResult FindPath(const TArray<FRouteNode>& Nodes,const TArray<FRouteEdge>& Edges,
        int32 StartIndex,int32 GoalIndex,
        const TSet<int32>& ExcludedNodes,
        const TSet<int32>& ExcludedEdges);

private:
    static float CalculateHeuristic(const TArray<FRouteNode>& Nodes,int32 NodeIndex,int32 GoalIndex,float MaxSpeed);
};
