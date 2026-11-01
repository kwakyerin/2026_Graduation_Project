// Fill out your copyright notice in the Description page of Project Settings.


#include "BeeAIController.h"


void ABeeAIController::OnPossess(APawn* InPawn) {
    Super::OnPossess(InPawn);

    UE_LOG(LogTemp, Warning,
        TEXT("[Bee AI] Controller=%s, Pawn=%s"),
        *GetNameSafe(this),
        *GetNameSafe(InPawn));
}


void ABeeAIController::InitializeBlackboardAndBehaviorTree()
{
    // Blackboard 초기화 및 BT 실행
}

void ABeeAIController::StartDecisionUpdates()
{
    // Utility 판단을 주기적으로 실행하도록 설정
}

void ABeeAIController::StopDecisionUpdates()
{
    // Utility 판단 갱신 중단
}

void ABeeAIController::UpdateDecision()
{
    // 상황 수집 → 점수 계산 → 행동 선택 → Blackboard 반영
}

void ABeeAIController::GatherDecisionContext()
{
    // 판단에 필요한 현재 상황 정보 수집
}

void ABeeAIController::CalculateUtilityScores()
{
    // 배회·공격 점수 계산
}

void ABeeAIController::SelectBehavior()
{
    // 실행할 행동과 대상 선택
}

void ABeeAIController::ApplyDecisionToBlackboard()
{
    // 선택한 행동과 대상을 Blackboard에 기록
}
