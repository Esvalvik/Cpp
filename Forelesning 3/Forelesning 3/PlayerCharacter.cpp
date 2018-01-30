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

void PlayerCharacter::getAttacks() const
{
}

int PlayerCharacter::getHP() const
{
	return m_hp;
}
