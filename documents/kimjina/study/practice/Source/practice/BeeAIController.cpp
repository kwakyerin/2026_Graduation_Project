// Fill out your copyright notice in the Description page of Project Settings.


#include "BeeAIController.h"

void ABeeAIController::OnPossess(APawn* InPawn) {
    Super::OnPossess(InPawn);

    UE_LOG(LogTemp, Warning,
        TEXT("[Bee AI] Controller=%s, Pawn=%s"),
        *GetNameSafe(this),
        *GetNameSafe(InPawn));
}