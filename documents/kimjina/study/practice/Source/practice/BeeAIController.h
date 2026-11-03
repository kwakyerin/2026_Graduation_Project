// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BeeAIController.generated.h"

/**
 * 
 */
class UBehaviorTree;
UCLASS()
class PRACTICE_API ABeeAIController : public AAIController
{
	GENERATED_BODY()
protected:
	virtual void OnPossess(APawn* InPawn)override;
    UPROPERTY(EditDefaultsOnly, Category = "Bee|AI")
    TObjectPtr<UBehaviorTree> BeeBehaviorTree;

private:
    // Blackboard 초기화 및 BT 실행
    void InitializeBlackboardAndBehaviorTree();

    // Utility 판단을 주기적으로 실행하도록 설정 / 해제
    void StartDecisionUpdates();
    void StopDecisionUpdates();

    // 아래 판단 과정을 순서대로 실행
    void UpdateDecision();

    // 현재 상황 정보 수집
    void GatherDecisionContext();

    // 배회·공격의 Utility 점수 계산
    void CalculateUtilityScores();

    // 점수를 바탕으로 행동과 대상 선택
    void SelectBehavior();

    // 선택 결과를 Blackboard에 전달
    void ApplyDecisionToBlackboard();

};
