// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"

#include "_PrimaryGameModulePrefix_HUD.generated.h"



/**
 * Game's base HUD class
 */
UCLASS()
class GAMETEMPLATE_API A_PrimaryGameModulePrefix_HUD : public AHUD
{
	GENERATED_BODY()

public:
	A_PrimaryGameModulePrefix_HUD(const FObjectInitializer& ObjectInitializer);

};
