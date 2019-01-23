// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SizeManipulationHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"

ASizeManipulationHUD::ASizeManipulationHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTexDefault = CrosshairTexObj.Object;

	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexBlueObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshairBlue"));
	CrosshairTexBlue = CrosshairTexBlueObj.Object;

	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexGreenObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshairGreen"));
	CrosshairTexGreen = CrosshairTexGreenObj.Object;

	CrosshairsIndex = 1;
}

void ASizeManipulationHUD::DrawHUD()
{
	Super::DrawHUD();

	// Draw very simple crosshair

	// find center of the Canvas
	const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

	// offset by half the texture's dimensions so that the center of the texture aligns with the center of the Canvas
	const FVector2D CrosshairDrawPosition( (Center.X),
										   (Center.Y + 20.0f));

	// draw the crosshair
	if (CrosshairsIndex == 0)
	{
		FCanvasTileItem TileItem(CrosshairDrawPosition, CrosshairTexBlue->Resource, FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
	else if (CrosshairsIndex == 2)
	{
		FCanvasTileItem TileItem(CrosshairDrawPosition, CrosshairTexGreen->Resource, FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
	else
	{
		FCanvasTileItem TileItem(CrosshairDrawPosition, CrosshairTexDefault->Resource, FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}
