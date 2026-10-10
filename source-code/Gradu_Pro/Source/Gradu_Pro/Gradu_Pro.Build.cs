// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Gradu_Pro : ModuleRules
{
	public Gradu_Pro(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Gradu_Pro",
			"Gradu_Pro/Variant_Platforming",
			"Gradu_Pro/Variant_Platforming/Animation",
			"Gradu_Pro/Variant_Combat",
			"Gradu_Pro/Variant_Combat/AI",
			"Gradu_Pro/Variant_Combat/Animation",
			"Gradu_Pro/Variant_Combat/Gameplay",
			"Gradu_Pro/Variant_Combat/Interfaces",
			"Gradu_Pro/Variant_Combat/UI",
			"Gradu_Pro/Variant_SideScrolling",
			"Gradu_Pro/Variant_SideScrolling/AI",
			"Gradu_Pro/Variant_SideScrolling/Gameplay",
			"Gradu_Pro/Variant_SideScrolling/Interfaces",
			"Gradu_Pro/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
