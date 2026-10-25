// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RouteGraphManager.generated.h"

class ARouteNodeActor;
class ACharacter;

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

UCLASS()
class GRADU_PRO_API ARouteGraphManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARouteGraphManager();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route Graph")
    TArray<FRouteNode> Nodes;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route Graph")
    TArray<FRouteEdge> Edges;

    UFUNCTION(BlueprintCallable, Category = "Route Graph")
    FRoutePathResult FindPathAStar(int32 StartIndex,int32 GoalIndex);

    // 그래프에 사용할 노드 Actor 목록
    UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Route Graph")
    TArray<ARouteNodeActor*> NodeActors;

    // 테스트용 출발 노드
    UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Route Graph")
    ARouteNodeActor* StartNodeActor = nullptr;

    // 목적지 노드
    UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Route Graph")
    ARouteNodeActor* GoalNodeActor = nullptr;

    // 배치한 Actor의 위치와 연결 정보를 그래프로 변환
    void BuildGraphFromActors();

    UFUNCTION(BlueprintCallable, Category = "Route Graph")
    TArray<FRoutePathResult> FindRoutes(ACharacter* Player, int32 K = 3);

    int32 AddPlayerStartNode(ACharacter* Player);//나중에 확장하기 위함

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    FRoutePathResult FindPathAStarInternal(int32 StartIndex, int32 GoalIndex, const TSet<int32>& ExcludedNodes, const TSet<int32>& ExcludedEdges);
private:
    float CalculateHeuristic(int32 NodeIndex,int32 GoalIndex,float MaxSpeed) const;
    
};
