// Fill out your copyright notice in the Description page of Project Settings.

#include "SayLaVie.h"
#include "sayLaVieHUD.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "SayLaVieCHaracter.h"


AsayLaVieHUD::AsayLaVieHUD(const class FPostConstructInitializeProperties& PCIP) :Super(PCIP)
{
	static ConstructorHelpers::FObjectFinder<UFont>HUDFontOb(TEXT("/Engine/EngineFonts/Roboto"));
	HUDFont = HUDFontOb.Object;
	isDialogue = false;
	FString DisplayText = "";
	dialogue = "";
	dialogueTimer = 0;
	criossant = Cast<ASayLaVieCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

}




/*
To display text simply modify the value of DisplayText

To post dialoge to the screen, simply call the dialogue function passing the
dialogue text as an FString. The string will stay on the screen for a default time
which can be modified by changing the value of dialogueTimer

*/
void AsayLaVieHUD::DrawHUD()
{
	Super::DrawHUD();

	FVector2D ScreenDimensions = FVector2D(Canvas->SizeX, Canvas->SizeY);
	DrawText(DisplayText, FColor::Red, 800, 800, HUDFont);
	FString dialogue;
	if (isDialogue){
		DrawText(dialogue, FColor::Red, 900, 800, HUDFont);
	}
	if (criossant->printToScreen != "")
		AsayLaVieHUD::Dialogue(criossant->printToScreen);
	if (dialogueTimer > 0){
		dialogueTimer--;
		if (dialogueTimer == 0){
			isDialogue = false;
			criossant->printToScreen = "";
		}
	}

}

//Pass strings of dialogue to this function for them to be printed to the screen
void AsayLaVieHUD::Dialogue(FString newDialogue){
	/*
	We may want to write a function that checks the length of the input strings,
	parses them to the correct size, and then prints them to the screen from a
	queue. Otherwise we will need to ensure that all of our input strings are
	formatted correctly
	*/

	isDialogue = true;
	dialogue = newDialogue;
	dialogueTimer = 20;
}
