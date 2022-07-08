// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/_PrimaryGameModulePrefix_PlayerController.h"



A_PrimaryGameModulePrefix_PlayerController::A_PrimaryGameModulePrefix_PlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}


void A_PrimaryGameModulePrefix_PlayerController::InitPlayerState()
{
	Super::InitPlayerState();
	// Right after Player State gets created
}
void A_PrimaryGameModulePrefix_PlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	// Right after Player State gets repped
}
