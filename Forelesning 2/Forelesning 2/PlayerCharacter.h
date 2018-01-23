#pragma once

#include <string>
#include <iostream>

using namespace std;

class PlayerCharacter
{
private:
	string m_name;
	unsigned int m_age;
public:
	PlayerCharacter(string name = "Unknown", int age = 0);
	~PlayerCharacter();
	void SetName(string name);
	void SetAge(int age);
	string GetName() const;
	int GetAge() const;

};

