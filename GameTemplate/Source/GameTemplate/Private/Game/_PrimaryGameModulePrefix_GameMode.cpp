// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/_PrimaryGameModulePrefix_GameMode.h"

#include "Game/_PrimaryGameModulePrefix_GameState.h"
#include "Player/_PrimaryGameModulePrefix_PlayerController.h"
#include "Player/_PrimaryGameModulePrefix_PlayerState.h"
#include "UI/_PrimaryGameModulePrefix_HUD.h"
#include "Character/_PrimaryGameModulePrefix_Character.h"



A_PrimaryGameModulePrefix_GameMode::A_PrimaryGameModulePrefix_GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GameStateClass = A_PrimaryGameModulePrefix_GameState::StaticClass();
	PlayerControllerClass = A_PrimaryGameModulePrefix_PlayerController::StaticClass();
	PlayerStateClass = A_PrimaryGameModulePrefix_PlayerState::StaticClass();
	HUDClass = A_PrimaryGameModulePrefix_HUD::StaticClass();
	DefaultPawnClass = A_PrimaryGameModulePrefix_Character::StaticClass();
	ReplaySpectatorPlayerControllerClass = A_PrimaryGameModulePrefix_PlayerController::StaticClass();
}
