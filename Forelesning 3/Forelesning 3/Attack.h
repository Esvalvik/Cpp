#pragma once
class Attack
{
public:
	Attack();
	~Attack();
	void run();
	bool isReady();

private:
	int m_damage;
	int m_cooldown;
};

