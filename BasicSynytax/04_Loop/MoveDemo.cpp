#include "../stdafx.h"
#include "MoveDemo.h"

void MoveDemo::Initialize()
{
	
}

void MoveDemo::Print()
{
	COORD position;
	position.X = 5;
	position.Y = 5;

	while (true)
	{
		Sleep(200);
		system("cls");
		cout << position.X << ", " << position.Y;


		if (GetAsyncKeyState('D'))
			position.X++;
		else if (GetAsyncKeyState('A'))
			position.X--;
		
		if (GetAsyncKeyState('S'))
			position.Y++;
		else if (GetAsyncKeyState('W'))
			position.Y--;

		if (position.X < 0)
			position.X = 0;

		if (position.Y < 0)
			position.Y = 0;

		if (position.X > 30)
			position.X = 30;

		if (position.Y > 20)
			position.Y = 20;


		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
		cout << "o<-<";

	}
}

void MoveDemo::Execute()
{
	Initialize();
	Print();
}

