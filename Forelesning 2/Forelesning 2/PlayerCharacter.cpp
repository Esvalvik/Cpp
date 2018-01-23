#include "stdafx.h"
#include "PlayerCharacter.h"


PlayerCharacter::PlayerCharacter(string name, int age)
{
	SetName(name);
	SetAge(age);
}

void PlayerCharacter::SetName(string name)
{
	m_name = name;
}

void PlayerCharacter::SetAge(int age)
{
	m_age = age;
}

string PlayerCharacter::GetName() const
{
	return m_name;
}

int PlayerCharacter::GetAge() const
{
	return m_age;
}

PlayerCharacter::~PlayerCharacter()
{
	cout << m_name << " blir nå slettet" << endl;
}