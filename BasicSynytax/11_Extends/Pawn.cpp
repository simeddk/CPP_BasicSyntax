#include "../stdafx.h"
#include "Pawn.h"

Pawn::Pawn()
	: Actor()
{
	cout << "�ڽ��� �����ڰ� ȣ���" << endl;
}

Pawn::Pawn(string symbol, SHORT x, SHORT y)
	: Actor(symbol, x, y)
{
	cout << "�ڽ��� �����ڰ� ȣ���" << endl;
}

Pawn::~Pawn()
{
	cout << "�ڽ��� �Ҹ��ڰ� ȣ���" << endl;
}

void Pawn::SetColorToRed()
{
	SetConsoleTextAttribute
	(
		GetStdHandle(STD_OUTPUT_HANDLE),
		FOREGROUND_RED
	);
}

void Pawn::SetColorToDefault()
{
	SetConsoleTextAttribute
	(
		GetStdHandle(STD_OUTPUT_HANDLE)
		, FOREGROUND_RED 
		| FOREGROUND_GREEN
		| FOREGROUND_BLUE
	);
}

void Pawn::Update()
{
	if (GetAsyncKeyState('W'))
		position.Y--;
	else if (GetAsyncKeyState('S'))
		position.Y++;

	if (GetAsyncKeyState('A'))
		position.X--;
	else if (GetAsyncKeyState('D'))
		position.X++;
}
