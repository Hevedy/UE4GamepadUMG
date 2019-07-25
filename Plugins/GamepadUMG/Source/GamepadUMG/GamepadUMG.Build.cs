// Copyright 2015 by Nathan "Rama" Iyer. All Rights Reserved.
using UnrealBuildTool;
using System.IO;

public class GamepadUMG : ModuleRules
{
    public GamepadUMG(ReadOnlyTargetRules Target) : base(Target)
    {
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.Add( Path.Combine( ModuleDirectory, "Public" ) );
		PrivateIncludePaths.Add( Path.Combine( ModuleDirectory, "Private" ) );

		PublicDependencyModuleNames.AddRange(
			new string[] { 
				"Core", 
				"CoreUObject", 
				"Engine", 
				"InputCore"
			}
		);

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "UMG" });

		DynamicallyLoadedModuleNames.AddRange(new string[] { });
	}
}
