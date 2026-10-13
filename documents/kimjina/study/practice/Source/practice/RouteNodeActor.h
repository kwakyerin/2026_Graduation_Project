// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RouteNodeActor.generated.h"

class ARouteNodeActor;
class USceneComponent;
class UBillboardComponent;

// 다른 노드로 이어지는 연결 정보
USTRUCT(BlueprintType)
struct FRouteNodeConnection
{
    GENERATED_BODY()

    // 이 구간을 지나면 도착하는 노드
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    ARouteNodeActor* TargetNode = nullptr;

    // 이 구간의 이동속도: cm/s
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route",
        meta = (ClampMin = "1.0"))
    float MoveSpeed = 500.0f;

    // 반대 방향으로도 이동 가능한지
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    bool bBidirectional = true;
};

UCLASS()
class PRACTICE_API ARouteNodeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARouteNodeActor();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Route")
    TArray<FRouteNodeConnection> Connections;

    // Actor의 위치 기준
    UPROPERTY(VisibleAnywhere, Category = "Route")
    USceneComponent* SceneRoot;

    // 에디터에서 노드 위치를 보여주는 아이콘
    UPROPERTY(VisibleAnywhere, Category = "Route")
    UBillboardComponent* NodeIcon;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};



