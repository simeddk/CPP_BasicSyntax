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
	cout << "Switch ����غ���" << endl;
	cout << "-----------------" << endl;

	cout << "1.����� 2.�ֽĽ� 3.����" << endl;
	int input;
	cout << "���� �ϳ� �Է� : ";
	cin >> input;

	switch (input)
	{
		case 1: cout << "������� ���̴�." << endl; break;
		case 2: cout << "�ֽĽ��� ���̴�" << endl; break;
		case 3:	cout << "���͸� ���̴�" << endl; break;
		default: cout << "���� ������" << endl;
	}
	cout << endl << endl;
#endif

	cout << "1.���� 2.������ 3.�ü� : ";
	int myJob;
	cin >> myJob;

	myClass = static_cast<EClassType>(myJob - 1);

	switch (myClass)
	{
		case Warrior:
		{
			TEXTCOLOR_RED;
			cout << "���縦 �����Ͻ�" << endl;
		}
		break;

		case Magician:
		{
			TEXTCOLOR_BLUE;
			cout << "���縦 �����Ͻ�" << endl;
		}
		break;
		
		case Archer:
		{
			TEXTCOLOR_GREEN;
			cout << "�ü��� �����Ͻ�" << endl;
		}
		break;

		default:
		{
			TEXTCOLOR_MAGENTA;
			cout << "�׷� ������ ���µ���?" << endl;
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

