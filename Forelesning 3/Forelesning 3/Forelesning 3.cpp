// Forelesning 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include "GameManager.h"


int main()
{
	GameManager* gameManager = &GameManager::GetInstance();
	gameManager->startGame();
	return EXIT_SUCCESS;
}