// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JS_Project : ModuleRules
{
	public JS_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

        bEnableUndefinedIdentifierWarnings = false;

        //PublicAdditionalLibraries.Add("C:/Program Files (x86)/Windows Kits/10/Lib/10.0.20348.0/um/arm/ws2_32.lib");
        PublicAdditionalLibraries.Add("ws2_32.lib");

    }
}
