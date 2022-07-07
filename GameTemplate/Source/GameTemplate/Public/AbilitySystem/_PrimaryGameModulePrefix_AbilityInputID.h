// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Types/ASSAbilityInputID.h"



/**
 * Our AbilityInputID enum
 */
UENUM()
enum class E_PrimaryGameModulePrefix_AbilityInputID : uint8
{
	Pause = static_cast<uint8>(EASSAbilityInputID::MAX),


	MAX					UMETA(Hidden)
};
