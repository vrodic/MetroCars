// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "MetroCarsHud.generated.h"


UCLASS(config = Game)
class AMetroCarsHud : public AHUD
{
	GENERATED_BODY()

public:
	AMetroCarsHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
