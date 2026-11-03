// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilityAISelector.h"

UtilityAISelector::UtilityAISelector()
{
}

UtilityAISelector::~UtilityAISelector()
{
}

FName UtilityAI::SelectBestAction(TConstArrayView<FUtilityActionCandidate> Candidates)
{
    const FUtilityActionCandidate* BestCandidate = nullptr;

    for (const FUtilityActionCandidate& Candidate : Candidates)
    {
        if (!Candidate.bCanRun || Candidate.ActionId.IsNone())
        {
            continue;
        }

        if (BestCandidate == nullptr || Candidate.Score > BestCandidate->Score)
        {
            BestCandidate = &Candidate;
        }
    }

    return BestCandidate ? BestCandidate->ActionId : NAME_None;
}