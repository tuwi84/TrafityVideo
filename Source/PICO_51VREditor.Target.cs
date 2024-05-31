// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class PICO_51VREditorTarget : TargetRules
{
	public PICO_51VREditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "PICO_51VR" } );
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;

    }
}
