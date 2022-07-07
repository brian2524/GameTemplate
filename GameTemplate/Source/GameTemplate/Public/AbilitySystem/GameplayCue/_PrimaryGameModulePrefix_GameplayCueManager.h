// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/GameplayCue/ASSGameplayCueManager.h"

#include "_PrimaryGameModulePrefix_GameplayCueManager.generated.h"



/**
 * Our custom GameplayCueManager
 */
UCLASS()
class GAMETEMPLATE_API U_PrimaryGameModulePrefix_GameplayCueManager : public UASSGameplayCueManager
{
	GENERATED_BODY()

public:
	virtual void FlushPendingCues() override;

};
