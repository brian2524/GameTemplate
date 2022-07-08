// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Types/ASSGameplayAbilityTypes.h"

#include "_PrimaryGameModulePrefix_GameplayAbilityTypes.generated.h"


class A_PrimaryGameModulePrefix_Character;
class A_PrimaryGameModulePrefix_PlayerController;
class A_PrimaryGameModulePrefix_PlayerState;



/**
 * Game's base GameplayAbilityActorInfo.
 * Put non-game-specific data in here - like base classes and stuff.
 */
USTRUCT()
struct GAMETEMPLATE_API F_PrimaryGameModulePrefix_GameplayAbilityActorInfo : public FASSGameplayAbilityActorInfo
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "_PrimaryGameModulePrefix_ActorInfo")
        TWeakObjectPtr<A_PrimaryGameModulePrefix_Character> _PrimaryGameModulePrefix_Character;

    UPROPERTY(BlueprintReadOnly, Category = "_PrimaryGameModulePrefix_ActorInfo")
        TWeakObjectPtr<A_PrimaryGameModulePrefix_PlayerController> _PrimaryGameModulePrefix_PlayerController;

    UPROPERTY(BlueprintReadOnly, Category = "_PrimaryGameModulePrefix_ActorInfo")
        TWeakObjectPtr<A_PrimaryGameModulePrefix_PlayerState> _PrimaryGameModulePrefix_PlayerState;


    virtual void InitFromActor(AActor* OwnerActor, AActor* AvatarActor, UAbilitySystemComponent* InAbilitySystemComponent) override;
    virtual void ClearActorInfo() override;
};
