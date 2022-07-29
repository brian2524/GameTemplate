// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/_PrimaryGameModulePrefix_Character.h"

#include "Subobjects/ActorComponents/GSActorComponent_PawnExtension.h"
#include "ActorComponents/ISActorComponent_PawnExtension.h"



A_PrimaryGameModulePrefix_Character::A_PrimaryGameModulePrefix_Character(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GSPawnExtensionComponent = CreateDefaultSubobject<UGSActorComponent_PawnExtension>(TEXT("GSPawnExtensionComponent"));
	ISPawnExtensionComponent = CreateDefaultSubobject<UISActorComponent_PawnExtension>(TEXT("ISPawnExtensionComponent"));
}


void A_PrimaryGameModulePrefix_Character::PawnClientRestart()
{
	Super::PawnClientRestart();

	ISPawnExtensionComponent->PawnClientRestart();
}

void A_PrimaryGameModulePrefix_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	ISPawnExtensionComponent->SetupPlayerInputComponent(PlayerInputComponent);
}
