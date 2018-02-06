#pragma once
class Attack
{
public:
	Attack();
	Attack(string name, int dmg, int cooldown);
	~Attack();
	void run();
	bool isReady();

private:
	string m_name;
	int m_damage;
	int m_cooldown;
};
