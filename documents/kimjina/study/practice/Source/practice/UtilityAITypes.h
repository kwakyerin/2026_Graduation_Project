// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

struct FUtilityActionCandidate
{
    FName ActionId = NAME_None;
    float Score = 0.0f;
    bool bCanRun = false;
};

class PRACTICE_API UtilityAITypes
{
public:
	UtilityAITypes();
	~UtilityAITypes();
};
