// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class GameTemplate : ModuleRules
{
	public GameTemplate(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Private/GameTemplatePrivatePCH.h";

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"GameplayTags",
				"AbilitySystemSetup",
				"AbilitySystemSetupExtras",
				"GameCore",
				"GameSetup",
				"ArcInventory",
				"ArcInventoryExtension",
			}
		);
	}
}
