/*
	This code was written by Nick Darnell
	
	Plugin created by Rama
*/
//#pragma once

//#include "Engine.h"
//#include "GamepadUMGPluginClasses.h"

//DECLARE_LOG_CATEGORY_EXTERN(GamepadUMGPlugin, Log, All);


#include "IGamepadUMG.h"
//#include "CoreUObject.h"
//#include "UObject/ObjectMacros.h"

#include "Runtime/Launch/Resources/Version.h"

#if ENGINE_MINOR_VERSION >= 15
#include "CoreMinimal.h"
#include "EngineDefines.h"
#include "Engine/Engine.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#else
#include "CoreUObject.h"
#include "Engine.h"
#endif