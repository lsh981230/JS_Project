// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JS_Core : ModuleRules
{
	public JS_Core(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

    }
}
