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
};
