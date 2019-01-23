// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SizeManipulationHUD.generated.h"

UCLASS()
class ASizeManipulationHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASizeManipulationHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTexDefault;
	class UTexture2D* CrosshairTexBlue;
	class UTexture2D* CrosshairTexGreen;

public:
	int CrosshairsIndex;
};

