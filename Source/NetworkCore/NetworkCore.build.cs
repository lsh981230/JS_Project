// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NetworkCore : ModuleRules
{
	public NetworkCore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

        bEnableUndefinedIdentifierWarnings = false;

        PublicAdditionalLibraries.Add("ws2_32.lib");
    }
}
