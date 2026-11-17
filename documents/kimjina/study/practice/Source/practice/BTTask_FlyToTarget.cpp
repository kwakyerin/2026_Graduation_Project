// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FlyToTarget.h"

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
}

bool UBTTask_FlyToTarget::GetTargetLocation(UBehaviorTreeComponent& OwnerComp,FVector& OutTargetLocation) const{
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

