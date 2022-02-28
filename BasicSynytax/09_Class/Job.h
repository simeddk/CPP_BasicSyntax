#pragma once

class Job
{
public:
	//Setter
	void SetName(string inName);
	void SetHealth(int inHp);
	void SetAttack(int inAtk);
	void SetRange(int inRange);

	//Getter
	string GetName();
	int GetHealth();
	int GetAttack();
	int GetRange();
	bool IsDead();
	
public:
	void ShowStatus();
	Job* GetThis();

private:
	string name;
	int hp;
	int atk;
	int range;
	//bool bDead;
};
