// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Types/ASSGameplayEffectTypes.h"
#include "AbilitySystem/Types/_PrimaryGameModulePrefix_GameplayAbilityTargetTypes.h"

#include "_PrimaryGameModulePrefix_GameplayEffectTypes.generated.h"



/**
 * Game's base GameplayEffectContext
 */
USTRUCT()
struct GAMETEMPLATE_API F_PrimaryGameModulePrefix_GameplayEffectContext : public FASSGameplayEffectContext
{
	GENERATED_BODY()

public:
	F_PrimaryGameModulePrefix_GameplayEffectContext();

	virtual UScriptStruct* GetScriptStruct() const override { return StaticStruct(); }

	virtual F_PrimaryGameModulePrefix_GameplayEffectContext* Duplicate() const override
	{
		F_PrimaryGameModulePrefix_GameplayEffectContext* NewContext = new F_PrimaryGameModulePrefix_GameplayEffectContext(); // allocate our version
		*NewContext = *this;
		if (GetHitResult())
		{
			// Does a deep copy of the hit result
			NewContext->AddHitResult(*GetHitResult(), true);
		}
		return NewContext;
	}

	virtual bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess) override;
};

template<>
struct TStructOpsTypeTraits<F_PrimaryGameModulePrefix_GameplayEffectContext> : public TStructOpsTypeTraitsBase2<F_PrimaryGameModulePrefix_GameplayEffectContext>
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true
	};
};
