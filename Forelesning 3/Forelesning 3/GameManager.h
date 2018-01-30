#pragma once
#include <vector>
#include <memory>
#include "PlayerCharacter.h"
class GameManager
{
public:
	static GameManager& GetInstance() 
	{
		static GameManager gameManager;
		return gameManager;
	};
	
	void startGame();
	void run();
	void validateInput(int& players);

private:
	
	GameManager();	// Constructor is hidden (& inline).
	~GameManager();	
	GameManager(const GameManager&) = delete;	// Copy constructor is deleted.
	GameManager& operator=(const GameManager&) = delete;  // Assign operator is deleted.
	
	vector<shared_ptr<PlayerCharacter>> m_players;
	bool isRunning = true;
};

