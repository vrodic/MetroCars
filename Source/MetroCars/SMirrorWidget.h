// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "Widgets/SWindow.h"

/**
 * 
 */
class METROCARS_API SMirrorWidget : public SWindow
{
public:
	SLATE_BEGIN_ARGS(SMirrorWidget)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
};



