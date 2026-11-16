// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RouteTypes.generated.h"
/**
 * 
 */

USTRUCT(BlueprintType)
struct FRouteNode {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    FVector WorldLocation = FVector::ZeroVector;
};

// 두 노드 사이의 이동 구간
USTRUCT(BlueprintType)
struct FRouteEdge
{
    GENERATED_BODY()


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    int32 FromNodeIndex = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    int32 ToNodeIndex = -1;

    // 해당 구간의 이동 속도: cm/s
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route",
        meta = (ClampMin = "1.0"))
    float MoveSpeed = 500.0f;

    // false이면 탐색에서 제외
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    bool bTraversable = true;
};

USTRUCT(BlueprintType)
struct FRoutePathResult
{
    GENERATED_BODY()

    //목적지까지 경로 찾았는지
    UPROPERTY(BlueprintReadOnly, Category = "Route")
    bool bFound = false;

    //어떤 지점을 거치는지
    UPROPERTY(BlueprintReadOnly, Category = "Route")
    TArray<int32> NodeIndices;

    //어떤 길을 택했는지 확인
    UPROPERTY(BlueprintReadOnly, Category = "Route")
    TArray<int32> EdgeIndices;

    //지나갈 노드의 좌표
    UPROPERTY(BlueprintReadOnly, Category = "Route")
    TArray<FVector> PathPoints;

    //예상시간 표시
    UPROPERTY(BlueprintReadOnly, Category = "Route")
    float TotalTime = 0.0f;
};