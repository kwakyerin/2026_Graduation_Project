// Fill out your copyright notice in the Description page of Project Settings.


#include "RouteNodeActor.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"

// Sets default values
ARouteNodeActor::ARouteNodeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    // 노드는 매 프레임 실행할 작업이 없으므로 Tick 비활성화
    PrimaryActorTick.bCanEverTick = false;

    // 위치 기준 컴포넌트 생성
    SceneRoot = CreateDefaultSubobject<USceneComponent>(
        TEXT("SceneRoot"));

    SetRootComponent(SceneRoot);

    // 에디터 표시용 아이콘 생성
    NodeIcon = CreateDefaultSubobject<UBillboardComponent>(
        TEXT("NodeIcon"));

    NodeIcon->SetupAttachment(SceneRoot);
    NodeIcon->SetHiddenInGame(true);

}

// Called when the game starts or when spawned
void ARouteNodeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARouteNodeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

