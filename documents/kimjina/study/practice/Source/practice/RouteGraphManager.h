// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RouteGraphManager.generated.h"

USTRUCT(BlueprintType)
struct FRouteNode {
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
	int32 NodeId = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
	FVector WorldLocation = FVector::ZeroVector;
};

// 두 노드 사이의 이동 구간
USTRUCT(BlueprintType)
struct FRouteEdge
{
    GENERATED_BODY()

    // 간선을 구분하는 고유 번호
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    int32 EdgeId = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    int32 FromNodeId = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    int32 ToNodeId = -1;

    // 해당 구간의 이동 속도: cm/s
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route",
        meta = (ClampMin = "1.0"))
    float MoveSpeed = 500.0f;

    // false이면 탐색에서 제외
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    bool bTraversable = true;
};
UCLASS()
class PRACTICE_API ARouteGraphManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARouteGraphManager();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route Graph")
    TArray<FRouteNode> Nodes;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route Graph")
    TArray<FRouteEdge> Edges;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
