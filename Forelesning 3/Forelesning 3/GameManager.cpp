#include "stdafx.h"
#include "GameManager.h"

void GameManager::startGame()
{
	cout << "Turnventure v1.0" << endl;
	cout << "------------------" << endl;

	int players = 0;
	while ((2 > players) && (players < 20))
	{
		cout << "Enter number of players: ";
		validateInput(players);
	}
	cout << "Number of players: " << players << endl;
	
}

void GameManager::validateInput(int& players)
{
	int error;
	do
	{
		error = 0;
		cin >> players;
		if (cin.fail())
		{
			cout << "Please enter a valid integer" << endl;
			error = 1;
			cin.clear();
			cin.ignore(80, '\n');
		}
	}
	while (error == 1);
}

GameManager::GameManager()
{
}


GameManager::~GameManager()
{
}
