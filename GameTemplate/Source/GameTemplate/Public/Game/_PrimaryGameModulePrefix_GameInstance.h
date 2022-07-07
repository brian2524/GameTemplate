// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/GSGameInstance.h"

#include "_PrimaryGameModulePrefix_GameInstance.generated.h"



/**
 * Game's base GameInstance class
 */
UCLASS()
class GAMETEMPLATE_API U_PrimaryGameModulePrefix_GameInstance : public UGSGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;

};
