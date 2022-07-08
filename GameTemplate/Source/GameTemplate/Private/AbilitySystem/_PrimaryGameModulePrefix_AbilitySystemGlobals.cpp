// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/_PrimaryGameModulePrefix_AbilitySystemGlobals.h"

#include "AbilitySystem/Types/_PrimaryGameModulePrefix_GameplayAbilityTypes.h"
#include "AbilitySystem/Types/_PrimaryGameModulePrefix_GameplayEffectTypes.h"



U_PrimaryGameModulePrefix_AbilitySystemGlobals::U_PrimaryGameModulePrefix_AbilitySystemGlobals(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}


FGameplayAbilityActorInfo* U_PrimaryGameModulePrefix_AbilitySystemGlobals::AllocAbilityActorInfo() const
{
	return new F_PrimaryGameModulePrefix_GameplayAbilityActorInfo();
}
FGameplayEffectContext* U_PrimaryGameModulePrefix_AbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new F_PrimaryGameModulePrefix_GameplayEffectContext();
}
