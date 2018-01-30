#pragma once
class Attack
{
public:
	Attack();
	~Attack();
	void run();
	bool isReady();

private:
	string m_name;
	int m_damage;
	int m_cooldown;
};
