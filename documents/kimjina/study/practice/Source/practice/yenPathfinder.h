// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RouteGraphManager.h"

class PRACTICE_API yenPathfinder
{
public:
    static TArray<FRoutePathResult> FindPaths(ARouteGraphManager& GraphManager,int32 StartIndex,int32 GoalIndex,int32 K);
};

