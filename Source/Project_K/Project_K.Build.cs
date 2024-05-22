// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_K : ModuleRules
{
	public Project_K(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
