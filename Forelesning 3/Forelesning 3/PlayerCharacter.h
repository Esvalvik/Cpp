#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Attack.h"
using namespace std;

class PlayerCharacter
{
public:
	PlayerCharacter(int hp, string name);
	~PlayerCharacter();
	void runTurn();
	void hit(int hp);
	void addAttack(Attack attack);
	void getAttacks() const;
	int getHP() const;
private:
	int m_attacks;
	int m_hp;
	string m_name;
	vector<shared_ptr<Attack>> m_attacks;
};

