// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test_01 : ModuleRules
{
	public Test_01(ReadOnlyTargetRules Target) : base(Target)
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
			"Test_01",
			"Test_01/Variant_Platforming",
			"Test_01/Variant_Platforming/Animation",
			"Test_01/Variant_Combat",
			"Test_01/Variant_Combat/AI",
			"Test_01/Variant_Combat/Animation",
			"Test_01/Variant_Combat/Gameplay",
			"Test_01/Variant_Combat/Interfaces",
			"Test_01/Variant_Combat/UI",
			"Test_01/Variant_SideScrolling",
			"Test_01/Variant_SideScrolling/AI",
			"Test_01/Variant_SideScrolling/Gameplay",
			"Test_01/Variant_SideScrolling/Interfaces",
			"Test_01/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
