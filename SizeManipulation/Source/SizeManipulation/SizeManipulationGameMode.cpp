// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SizeManipulationGameMode.h"
#include "SizeManipulationHUD.h"
#include "SizeManipulationCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASizeManipulationGameMode::ASizeManipulationGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASizeManipulationHUD::StaticClass();
}