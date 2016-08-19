// Fill out your copyright notice in the Description page of Project Settings.

#include "MetroCars.h"
#include "SMirrorWidget.h"
#include "SlateOptMacros.h"

#define LOCTEXT_NAMESPACE "SMirrorWidget"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SMirrorWidget::Construct(const FArguments& InArgs)
{
	/*
	ChildSlot
	[
		// Populate the widget
	];
	*/
    SWindow::Construct(SWindow::FArguments()
        .Title(LOCTEXT("SMirrorWidget", "Mirror"))
        .SupportsMinimize(false)
        .SupportsMaximize(false)
        //.SizingRule( ESizingRule::Autosized )
        .ClientSize(FVector2D(450, 450))
        [
            SNew(SVerticalBox)

            ]);

}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef LOCTEXT_NAMESPACE
