// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "minigameController.h"
#include "minigameActor.h"
#include "groceryMinigame.generated.h"

//We will need to include the minigameItem class once we make it
/**
 * 
 */
UCLASS()
class SAYLAVIE_API AgroceryMinigame : public AminigameController
{
	GENERATED_UCLASS_BODY()
	void Interact();

};
