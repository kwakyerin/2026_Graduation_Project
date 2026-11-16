// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RouteTypes.h"
class UObject;
class ACharacter;
/**
 * 
 */
class GRADU_PRO_API RouteNavigationBuilder
{
public:
    static bool Expand(UObject* WorldContextObject,ACharacter* Player,TArray<FRouteNode>& Nodes,TArray<FRouteEdge>& Edges);
};
