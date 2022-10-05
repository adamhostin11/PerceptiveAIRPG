// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PerceptiveAIRPG : ModuleRules
{
	public PerceptiveAIRPG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
