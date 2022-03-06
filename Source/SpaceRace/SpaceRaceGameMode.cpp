// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceRaceGameMode.h"
#include "SpaceRacePawn.h"

ASpaceRaceGameMode::ASpaceRaceGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ASpaceRacePawn::StaticClass();
}
