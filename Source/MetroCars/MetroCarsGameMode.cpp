// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "MetroCars.h"
#include "MetroCarsGameMode.h"
#include "MetroCarsPawn.h"
#include "MetroCarsHud.h"


#include "SlateBasics.h"
#include "SlateRenderer.h"
#include "SMirrorWidget.h"

AMetroCarsGameMode::AMetroCarsGameMode()
{
	DefaultPawnClass = AMetroCarsPawn::StaticClass();
    //HUDClass = AMetroCarsHud::StaticClass();

    TSharedRef<SMirrorWidget> window = SNew(SMirrorWidget);

   // FSlateApplication::Get().AddWindow( window, true );


    //window->set

    //window->SetViewport();
}
