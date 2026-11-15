// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FlyToTarget.h"

UBTTask_FlyToTarget::UBTTask_FlyToTarget() {

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

