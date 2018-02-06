#include "stdafx.h"
#include "PlayerCharacter.h"


PlayerCharacter::PlayerCharacter(int hp, string name)
{
	m_hp = hp;
	m_name = name;
}

PlayerCharacter::~PlayerCharacter()
{
}

void PlayerCharacter::runTurn()
{
}

void PlayerCharacter::hit(int hp)
{
	if ((m_hp - hp) < 0) 
	{
		m_hp = 0;
	}
	else 
	{
		m_hp -= hp;
	}
}

void PlayerCharacter::addAttack(Attack attack)
{
}

void PlayerCharacter::getAttacks() const
{
}

int PlayerCharacter::getHP() const
{
	return m_hp;
}
