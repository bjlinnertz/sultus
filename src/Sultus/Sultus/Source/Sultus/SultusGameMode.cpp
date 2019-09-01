// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SultusGameMode.h"
#include "SultusHUD.h"
#include "SultusCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASultusGameMode::ASultusGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASultusHUD::StaticClass();
}
