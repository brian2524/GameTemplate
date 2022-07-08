// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/GSGameMode.h"

#include "_PrimaryGameModulePrefix_GameMode.generated.h"



/**
 * Game's base GameMode class
 */
UCLASS()
class GAMETEMPLATE_API A_PrimaryGameModulePrefix_GameMode : public AGSGameMode
{
	GENERATED_BODY()

public:
	A_PrimaryGameModulePrefix_GameMode(const FObjectInitializer& ObjectInitializer);

protected:

};
