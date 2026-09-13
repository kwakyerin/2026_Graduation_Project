// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Replication_Test : ModuleRules
{
	public Replication_Test(ReadOnlyTargetRules Target) : base(Target)
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
			"Replication_Test",
			"Replication_Test/Variant_Platforming",
			"Replication_Test/Variant_Platforming/Animation",
			"Replication_Test/Variant_Combat",
			"Replication_Test/Variant_Combat/AI",
			"Replication_Test/Variant_Combat/Animation",
			"Replication_Test/Variant_Combat/Gameplay",
			"Replication_Test/Variant_Combat/Interfaces",
			"Replication_Test/Variant_Combat/UI",
			"Replication_Test/Variant_SideScrolling",
			"Replication_Test/Variant_SideScrolling/AI",
			"Replication_Test/Variant_SideScrolling/Gameplay",
			"Replication_Test/Variant_SideScrolling/Interfaces",
			"Replication_Test/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
