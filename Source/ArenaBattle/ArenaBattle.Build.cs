// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ArenaBattle : ModuleRules
{
	public ArenaBattle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(new string[] { "ArenaBattle" });

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
