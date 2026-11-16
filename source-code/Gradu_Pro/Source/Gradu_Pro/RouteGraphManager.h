// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RouteTypes.h"
#include "RouteGraphManager.generated.h"

class ARouteNodeActor;
class ACharacter;

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
    bool ExpandGraphEdgesWithNavigation(ACharacter* Player);
};
