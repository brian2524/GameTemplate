// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

//#include "GameTemplateModule.generated.h" // uncomment this if we need reflection in here



/**
 * Game Template module
 */
class FGameTemplateModule : public FDefaultGameModuleImpl
{
protected:
	//  BEGIN IModuleInterface interface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	//  END IModuleInterface interface
};
