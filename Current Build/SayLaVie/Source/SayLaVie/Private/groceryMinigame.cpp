// Fill out your copyright notice in the Description page of Project Settings.

#include "SayLaVie.h"
#include "minigameController.h"
#include "groceryMinigame.h"
#include "sayLaVieHUD.h"
#include "SayLaVieCharacter.h"
#include <iostream>
#include <string>
#include<random>



AgroceryMinigame::AgroceryMinigame(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP){
	//This is where we should attach a model to this minigameController
	temp[0] = "Bonjour";
	temp[1] = "Salut";
	temp[2] = "Parle vour francais";
}

//Inherited from minigameController, write code for it here
void AgroceryMinigame::Interact(){
	Super::Interact();
	AgroceryMinigame::talk();
	//We need to set spawn "parameters" for minigameActors that will be spawned
	//also this is where we should call the spawn function from

	//NOTE: This function is called from the SayLaVieCharacter.cpp function also titled Interact
	//when the player presses the "E" key and is within a certain distance
}

void AgroceryMinigame::talk(){
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0, 2);
	ASayLaVieCharacter* criossant = Cast<ASayLaVieCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	criossant->printToScreen = temp[distribution(generator)];
}

