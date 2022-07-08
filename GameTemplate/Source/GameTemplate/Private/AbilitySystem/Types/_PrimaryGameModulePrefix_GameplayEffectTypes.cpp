// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Types/_PrimaryGameModulePrefix_GameplayEffectTypes.h"



F_PrimaryGameModulePrefix_GameplayEffectContext::F_PrimaryGameModulePrefix_GameplayEffectContext()
{

}


bool F_PrimaryGameModulePrefix_GameplayEffectContext::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
{
	return Super::NetSerialize(Ar, Map, bOutSuccess);
}
