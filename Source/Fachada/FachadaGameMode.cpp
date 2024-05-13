// Copyright Epic Games, Inc. All Rights Reserved.

#include "FachadaGameMode.h"
#include "FachadaPawn.h"

AFachadaGameMode::AFachadaGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFachadaPawn::StaticClass();
}

