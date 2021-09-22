// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MP_try : ModuleRules
{
	public MP_try(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
