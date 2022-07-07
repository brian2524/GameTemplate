// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Types/_PrimaryGameModulePrefix_GameplayAbilityTypes.h"

#include "Character/_PrimaryGameModulePrefix_Character.h"
#include "Player/_PrimaryGameModulePrefix_PlayerController.h"
#include "Player/_PrimaryGameModulePrefix_PlayerState.h"



void F_PrimaryGameModulePrefix_GameplayAbilityActorInfo::InitFromActor(AActor* InOwnerActor, AActor* InAvatarActor, UAbilitySystemComponent* InAbilitySystemComponent)
{
	Super::InitFromActor(InOwnerActor, InAvatarActor, InAbilitySystemComponent);

	// Get our _PrimaryGameModulePrefix_Character
	_PrimaryGameModulePrefix_Character = Cast<A_PrimaryGameModulePrefix_Character>(InAvatarActor);

	// Get our PC and PS
	if (PlayerController.IsValid())
	{
		_PrimaryGameModulePrefix_PlayerController = Cast<A_PrimaryGameModulePrefix_PlayerController>(PlayerController.Get());
		_PrimaryGameModulePrefix_PlayerState = PlayerController->GetPlayerState<A_PrimaryGameModulePrefix_PlayerState>();
	}
	else
	{
		_PrimaryGameModulePrefix_PlayerController = nullptr;
		_PrimaryGameModulePrefix_PlayerState = nullptr;
	}
}

void F_PrimaryGameModulePrefix_GameplayAbilityActorInfo::ClearActorInfo()
{
	Super::ClearActorInfo();

	_PrimaryGameModulePrefix_Character = nullptr;
	_PrimaryGameModulePrefix_PlayerController = nullptr;
	_PrimaryGameModulePrefix_PlayerState = nullptr;
}
