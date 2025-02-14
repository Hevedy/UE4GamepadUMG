#include "IGamepadUMG.h"
#include "GamepadUMGPrivatePCH.h"

class FGamepadUMG : public IGamepadUMG {
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FGamepadUMG, GamepadUMG )



void FGamepadUMG::StartupModule() {
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FGamepadUMG::ShutdownModule() {
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}