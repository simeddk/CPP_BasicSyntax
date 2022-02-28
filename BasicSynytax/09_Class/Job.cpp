#include "../stdafx.h"
#include "Job.h"

void Job::SetName(string inName)
{
	name = inName;
}

void Job::SetHealth(int inHp)
{
	hp = inHp;
}

void Job::SetAttack(int inAtk)
{
	atk = inAtk;
}

void Job::SetRange(int inRange)
{
	range = inRange;
}

string Job::GetName()
{
	return name;
}

int Job::GetHealth()
{
	return hp;
}

int Job::GetAttack()
{
	return atk;
}

int Job::GetRange()
{
	return range;
}

bool Job::IsDead()
{
	return hp <= 0;
}

void Job::ShowStatus()
{
	cout << "이름 : " << name << endl;
	cout << "체력 : " << hp << endl;
	cout << "공격력 : " << atk << endl;
	cout << "범위 : " << range << endl;
}

Job * Job::GetThis()
{
	return this;
}
