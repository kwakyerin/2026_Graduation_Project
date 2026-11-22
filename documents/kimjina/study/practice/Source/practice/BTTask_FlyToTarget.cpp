// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FlyToTarget.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "GameFramework/Actor.h"

UBTTask_FlyToTarget::UBTTask_FlyToTarget() {
	//bt에 표시할 이름
	NodeName = TEXT("FlyToTarget");
	//이동 중 반복 처리
	bNotifyTick = true;
	//좌표를 목표로 선택 할 수 있도록
	TargetKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_FlyToTarget, TargetKey));
	//플레이어 공격할 때 , 플레이어를 목표로 지정할 수 있도록
	TargetKey.AddObjectFilter(this,GET_MEMBER_NAME_CHECKED(UBTTask_FlyToTarget, TargetKey),AActor::StaticClass());
	TargetKey.SelectedKeyName = TEXT("MoveTarget");
}

void UBTTask_FlyToTarget:: InitializeFromAsset(UBehaviorTree& Asset){
	Super::InitializeFromAsset(Asset);

	if (Asset.BlackboardAsset)
	{
		TargetKey.ResolveSelectedKey(*Asset.BlackboardAsset);
	}
}

bool UBTTask_FlyToTarget::GetTargetLocation(UBehaviorTreeComponent& OwnerComp,FVector& OutTargetLocation) const{
    UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();

    if (!Blackboard || TargetKey.SelectedKeyName.IsNone())
    {
        return false;
    }

    if (TargetKey.SelectedKeyType == UBlackboardKeyType_Vector::StaticClass())
    {
        if (!Blackboard->IsVectorValueSet(TargetKey.SelectedKeyName))
        {
            return false;
        }

        OutTargetLocation = Blackboard->GetValueAsVector(TargetKey.SelectedKeyName);

        return true;
    }

    if (TargetKey.SelectedKeyType == UBlackboardKeyType_Object::StaticClass())
    {
        AActor* TargetActor = Cast<AActor>(Blackboard->GetValueAsObject(TargetKey.SelectedKeyName));

        if (!IsValid(TargetActor))
        {
            return false;
        }

        OutTargetLocation = TargetActor->GetActorLocation();

        return true;
    }
	return false;
}

EBTNodeResult::Type UBTTask_FlyToTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp,uint8* NodeMemory){
	return EBTNodeResult::Failed;
}

void UBTTask_FlyToTarget::TickTask(UBehaviorTreeComponent& OwnerComp,uint8* NodeMemory,float DeltaSeconds){ 
}

void UBTTask_FlyToTarget::StopFlight(UBehaviorTreeComponent& OwnerComp) const {

}

EBTNodeResult::Type UBTTask_FlyToTarget::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	return EBTNodeResult::Aborted;

}

