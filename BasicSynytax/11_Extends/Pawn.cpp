#include "../stdafx.h"
#include "Pawn.h"

Pawn::Pawn()
	: Actor()
{
	cout << "자식의 생성자가 호출됨" << endl;
}

Pawn::Pawn(string symbol, SHORT x, SHORT y)
	: Actor(symbol, x, y)
{
	cout << "자식의 생성자가 호출됨" << endl;
}

Pawn::~Pawn()
{
	cout << "자식의 소멸자가 호출됨" << endl;
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
