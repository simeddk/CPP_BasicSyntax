#include "../stdafx.h"
#include "SwitchDemo.h"

#define NoUse

enum EClassType { Warrior, Magician, Archer };
EClassType myClass;

void SwitchDemo::Initialize()
{
	
}

void SwitchDemo::Print()
{
	PrintFile;

#ifndef NoUse
	cout << "Switch 사용해보기" << endl;
	cout << "-----------------" << endl;

	cout << "1.레드불 2.핫식스 3.몬스터" << endl;
	int input;
	cout << "정수 하나 입력 : ";
	cin >> input;

	switch (input)
	{
		case 1: cout << "레드불을 마셨다." << endl; break;
		case 2: cout << "핫식스를 마셨다" << endl; break;
		case 3:	cout << "몬스터를 마셨다" << endl; break;
		default: cout << "없는 선택지" << endl;
	}
	cout << endl << endl;
#endif

	cout << "1.전사 2.마법사 3.궁수 : ";
	int myJob;
	cin >> myJob;

	myClass = static_cast<EClassType>(myJob - 1);

	switch (myClass)
	{
		case Warrior:
		{
			TEXTCOLOR_RED;
			cout << "전사를 선택하심" << endl;
		}
		break;

		case Magician:
		{
			TEXTCOLOR_BLUE;
			cout << "법사를 선택하심" << endl;
		}
		break;
		
		case Archer:
		{
			TEXTCOLOR_GREEN;
			cout << "궁수를 선택하심" << endl;
		}
		break;

		default:
		{
			TEXTCOLOR_MAGENTA;
			cout << "그런 직업은 없는데요?" << endl;
		}
		break;
	}

	TEXTCOLOR_WHITE;
}

void SwitchDemo::Execute()
{
	Initialize();
	Print();
}

