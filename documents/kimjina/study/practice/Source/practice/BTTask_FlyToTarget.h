// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_FlyToTarget.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICE_API UBTTask_FlyToTarget : public UBTTaskNode
{
	GENERATED_BODY()
public:
    UBTTask_FlyToTarget();

protected:
    virtual void InitializeFromAsset(UBehaviorTree& Asset) override;

    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp,uint8* NodeMemory) override;

    virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory,float DeltaSeconds) override;

    virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp,uint8* NodeMemory) override;

    UPROPERTY(EditAnywhere, Category = "Flight")
    FBlackboardKeySelector TargetKey;

    UPROPERTY(EditAnywhere, Category = "Flight", meta = (ClampMin = "1.0"))
    float AcceptanceRadius = 30.0f;

private:
    bool GetTargetLocation(UBehaviorTreeComponent& OwnerComp,FVector& OutTargetLocation) const;

    void StopFlight(UBehaviorTreeComponent& OwnerComp) const;
};
