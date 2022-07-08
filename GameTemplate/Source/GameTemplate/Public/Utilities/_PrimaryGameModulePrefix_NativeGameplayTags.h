// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"



/**
 * This module's Native Gameplay Tags wrapped in a namespace.
 * 
 * Included in project's PCH.
 * This is nice so that when you type "_PrimaryGameModulePrefix_NativeGameplayTags::" and then see the list of all of the module's Gameplay Tags.
 */
namespace _PrimaryGameModulePrefix_NativeGameplayTags
{
	GAMETEMPLATE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Example_Gameplay_Tag)
}
