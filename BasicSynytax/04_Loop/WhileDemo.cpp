#include "../stdafx.h"
#include "WhileDemo.h"

#define CountDown
#define InfinityLoop
#define KeyState

ULONGLONG prevTime;

void WhileDemo::Initialize()
{
	prevTime = GetTickCount64();
}

void WhileDemo::Print()
{
	PrintFile;
	cout << "While�� ����غ���" << endl;
	cout << "----------------" << endl;

#ifndef CountDown
	ULONGLONG currentTime = 0;
	int count = 5;

	while (count >= 0)
	{
		currentTime = GetTickCount64();
		currentTime -= prevTime; //currentTime = currentTime - prevTime

		if (currentTime > 1000)
		{
			cout << count << endl;
			count--;
			prevTime = GetTickCount64();
		}

	}

	TEXTCOLOR_RED;
	cout << "��!" << endl;
	TEXTCOLOR_WHITE;
#endif

#ifndef InfinityLoop
	while (true)
	{
		system("cls");
		cout << "^(-_- )~";
		Sleep(100);

		system("cls");
		cout << "~( -_-)^";
		Sleep(100);

		if (GetAsyncKeyState('Q'))
			break;
	}
#endif

#ifndef KeyState
	while (true)
	{
		system("cls");

		if (GetAsyncKeyState('W'))
			cout << "���� ����" << endl;
		else if (GetAsyncKeyState('S'))
			cout << "�Ʒ��� ����" << endl;

		else if (GetAsyncKeyState('D'))
			cout << "�������� ����" << endl;
		else if (GetAsyncKeyState('A'))
			cout << "������ ����" << endl;

		Sleep(200);
	}
#endif

	cout << "���θ� ������  �ϰ� �ʹ�" << endl;
	cout << "������ ������  �ϰ� �ʹ�" << endl;

	COORD position; //������ ���� : T name
	position.X = 13;
	position.Y = 4;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	cout << "��";


	position.X = 10;
	position.Y = 8;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void WhileDemo::Execute()
{
	Initialize();
	Print();
}

