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
	cout << "�̸� : " << name << endl;
	cout << "ü�� : " << hp << endl;
	cout << "���ݷ� : " << atk << endl;
	cout << "���� : " << range << endl;
}

Job * Job::GetThis()
{
	return this;
}
