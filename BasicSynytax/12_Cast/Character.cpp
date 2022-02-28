#include "../stdafx.h"
#include "Character.h"

Character::Character(string symbol, short x, short y)
	: GameObject(symbol, {x, y})
{
}

void Character::Update()
{
	if (GetAsyncKeyState('W') & 0x8000)
		position.Y--;
	else if (GetAsyncKeyState('S') & 0x8000)
		position.Y++;

	if (GetAsyncKeyState('A') & 0x8000)
		position.X--;
	else if (GetAsyncKeyState('D') & 0x8000)
		position.X++;
}

void Character::Render()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	cout << symbol;
}
