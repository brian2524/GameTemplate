// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

//#include "GameTemplateModule.generated.h" // if we ever need reflection in here



/**
 * Game Template module
 */
class FGameTemplateModule : public FDefaultGameModuleImpl
{
protected:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
