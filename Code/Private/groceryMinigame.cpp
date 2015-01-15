// Fill out your copyright notice in the Description page of Project Settings.

#include "SayLaVie.h"
#include "minigameController.h"
#include "groceryMinigame.h"


AgroceryMinigame::AgroceryMinigame(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP){
	//This is where we should attach a model to this minigameController
}

//Inherited from minigameController, write code for it here
void AgroceryMinigame::Interact(){
	//We need to set spawn "parameters" for minigameActors that will be spawned
	//also this is where we should call the spawn function from

	//NOTE: This function is called from the SayLaVieCharacter.cpp function also titled Interact
	//when the player presses the "E" key and is within a certain distance
}

