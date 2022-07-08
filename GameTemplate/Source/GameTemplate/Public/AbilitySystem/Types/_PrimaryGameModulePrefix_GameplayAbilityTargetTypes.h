// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Types/ASSGameplayAbilityTargetTypes.h"

#include "_PrimaryGameModulePrefix_GameplayAbilityTargetTypes.generated.h"



/**
 * Game's base GameplayAbilityTargetData
 */
USTRUCT()
struct GAMETEMPLATE_API F_PrimaryGameModulePrefix_GameplayAbilityTargetData : public FASSGameplayAbilityTargetData
{
	GENERATED_BODY()

	F_PrimaryGameModulePrefix_GameplayAbilityTargetData();

	virtual UScriptStruct* GetScriptStruct() const override { return StaticStruct(); }
};
