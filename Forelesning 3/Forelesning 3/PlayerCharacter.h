#pragma once
#include <string>
using namespace std;
class PlayerCharacter
{
public:
	PlayerCharacter(int hp, string name);
	~PlayerCharacter();
	void runTurn();
	void hit();
	void addAttack();
	void getAttacks() const;
	void getHP() const;
private:
	int m_attacks;
	int m_hp;
	string m_name;
};

