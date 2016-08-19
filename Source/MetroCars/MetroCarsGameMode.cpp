// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "MetroCars.h"
#include "MetroCarsGameMode.h"
#include "MetroCarsPawn.h"
#include "MetroCarsHud.h"

AMetroCarsGameMode::AMetroCarsGameMode()
{
	DefaultPawnClass = AMetroCarsPawn::StaticClass();
	HUDClass = AMetroCarsHud::StaticClass();
}
