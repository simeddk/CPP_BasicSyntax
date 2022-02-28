#include "../stdafx.h"
#include "Weapon.h"

Weapon::Weapon()
{
	TEXTCOLOR_CYAN;
	cout << "기본 생성자가 호출됨" << endl;
	TEXTCOLOR_WHITE;

	name = "이름없음";
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
	cout << "오버로딩된 생성자가 호출됨" << endl;
	TEXTCOLOR_WHITE;

	powerTable = new int[comboCount];

	for (int i = 0; i < comboCount; i++)
		powerTable[i] = (i + 1) * 100;
}

Weapon::~Weapon()
{
	TEXTCOLOR_RED
	cout << name << "의 소멸자가 호출됨" << endl;
	TEXTCOLOR_WHITE;

	delete[] powerTable;
}

void Weapon::ShowStatus()
{
	cout << "무기이름 : " << name << endl;
	cout << "사정거리 : " << range << endl;
	cout << "콤보회수 : " << comboCount << endl;

	for (int i = 0; i < comboCount; i++)
		cout << i + 1 << "타의 공격력 : " << powerTable[i] << endl;
}

void Weapon::SetComboPower(int count, int power)
{
	TEXTCOLOR_MAGENTA;
	cout << count << "타수의 공격력을 " << powerTable[count] << "에서";
	cout << power << "로 변경합니다. " << endl;
	TEXTCOLOR_WHITE

	powerTable[count] = power;
}

