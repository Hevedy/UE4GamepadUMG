/*
	This code was written by Nick Darnell
	
	Plugin created by Rama
*/
#include "VirtualCursorFunctionLibrary.h"
#include "GamepadUMGPrivatePCH.h"
#include "GamepadCursorSettings.h"
#include "GameAnalogCursor.h"

void UVirtualCursorFunctionLibrary::EnableVirtualCursor(class APlayerController* PC)
{
	FGameAnalogCursor::EnableAnalogCursor(PC, TSharedPtr<SWidget>());
}

void UVirtualCursorFunctionLibrary::DisableVirtualCursor(class APlayerController* PC)
{
	FGameAnalogCursor::DisableAnalogCursor(PC);
}

bool UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget()
{
	TSharedPtr<FGameAnalogCursor> Analog = GetDefault<UGamepadCursorSettings>()->GetAnalogCursor();
	if ( Analog.IsValid() )
	{
		return Analog->IsHovered();
	}

	return false;
}
