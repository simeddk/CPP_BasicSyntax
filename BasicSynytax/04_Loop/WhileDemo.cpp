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
	cout << "While을 사용해보기" << endl;
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
	cout << "펑!" << endl;
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
			cout << "위가 눌림" << endl;
		else if (GetAsyncKeyState('S'))
			cout << "아래가 눌림" << endl;

		else if (GetAsyncKeyState('D'))
			cout << "오른쪽이 눌림" << endl;
		else if (GetAsyncKeyState('A'))
			cout << "왼쪽이 눌림" << endl;

		Sleep(200);
	}
#endif

	cout << "공부를 열심히  하고 싶다" << endl;
	cout << "과제를 열심히  하고 싶다" << endl;

	COORD position; //변수의 선언 : T name
	position.X = 13;
	position.Y = 4;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	cout << "안";


	position.X = 10;
	position.Y = 8;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void WhileDemo::Execute()
{
	Initialize();
	Print();
}

