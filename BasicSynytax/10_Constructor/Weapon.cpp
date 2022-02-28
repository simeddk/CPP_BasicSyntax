#include "../stdafx.h"
#include "Weapon.h"

Weapon::Weapon()
{
	TEXTCOLOR_CYAN;
	cout << "�⺻ �����ڰ� ȣ���" << endl;
	TEXTCOLOR_WHITE;

	name = "�̸�����";
	range = 1;
	comboCount = 3;

	powerTable = new int[comboCount];

	for (int i = 0; i < comboCount; i++)
		powerTable[i] = (i + 1) * 100;

}

Weapon::Weapon(string name, int range, int comboCount)
	: name(name)
	, range(range)
	, comboCount(comboCount)
{
	TEXTCOLOR_CYAN;
	cout << "�����ε��� �����ڰ� ȣ���" << endl;
	TEXTCOLOR_WHITE;

	powerTable = new int[comboCount];

	for (int i = 0; i < comboCount; i++)
		powerTable[i] = (i + 1) * 100;
}

Weapon::~Weapon()
{
	TEXTCOLOR_RED
	cout << name << "�� �Ҹ��ڰ� ȣ���" << endl;
	TEXTCOLOR_WHITE;

	delete[] powerTable;
}

void Weapon::ShowStatus()
{
	cout << "�����̸� : " << name << endl;
	cout << "�����Ÿ� : " << range << endl;
	cout << "�޺�ȸ�� : " << comboCount << endl;

	for (int i = 0; i < comboCount; i++)
		cout << i + 1 << "Ÿ�� ���ݷ� : " << powerTable[i] << endl;
}

void Weapon::SetComboPower(int count, int power)
{
	TEXTCOLOR_MAGENTA;
	cout << count << "Ÿ���� ���ݷ��� " << powerTable[count] << "����";
	cout << power << "�� �����մϴ�. " << endl;
	TEXTCOLOR_WHITE

	powerTable[count] = power;
}

