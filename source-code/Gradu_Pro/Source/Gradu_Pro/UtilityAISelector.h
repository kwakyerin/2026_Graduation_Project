// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/ArrayView.h"
#include "UtilityAITypes.h"
/**
 * 
 */

namespace UtilityAI
{
	FName SelectBestAction(TConstArrayView<FUtilityActionCandidate> Candidates);
}

class GRADU_PRO_API UtilityAISelector
{
public:
	UtilityAISelector();
	~UtilityAISelector();
};
