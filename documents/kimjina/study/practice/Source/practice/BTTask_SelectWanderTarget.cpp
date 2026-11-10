// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SelectWanderTarget.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"

EBTNodeResult::Type UBTTask_SelectWanderTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp,uint8* NodeMemory)
{
    // 이후 배회 목표를 선택하고 Blackboard에 저장
    UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();//벌의 블랙보드 가져옴
    if (!Blackboard)
    {
        return EBTNodeResult::Failed;
    }
    const FName HomeKey(TEXT("HomeLocation"));
    const FName TargetKey(TEXT("MoveTarget"));

    if (!Blackboard->IsVectorValueSet(HomeKey))
    {
        return EBTNodeResult::Failed;
    }

    const FVector HomeLocation = Blackboard->GetValueAsVector(HomeKey);

    const FVector2D RandomOffset = FMath::RandPointInCircle(WanderRadius);
    const FVector TargetLocation = HomeLocation + FVector(RandomOffset.X, RandomOffset.Y, 0.0f);

    const bool bSaved =Blackboard->SetValue<UBlackboardKeyType_Vector>(TargetKey,TargetLocation);

    return bSaved?EBTNodeResult::Succeeded : EBTNodeResult::Failed;
}
