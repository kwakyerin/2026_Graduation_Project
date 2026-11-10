// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SelectWanderTarget.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICE_API UBTTask_SelectWanderTarget : public UBTTaskNode
{
	GENERATED_BODY()
protected:
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp,uint8* NodeMemory) override;

protected:
    UPROPERTY(EditAnywhere, Category = "Wander", meta = (ClampMin = "0.0"))//에디터에서 값 조정할 수 있도록
    float WanderRadius = 500.0f;//반경
};
