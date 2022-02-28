#include "../stdafx.h"
#include "Animal.h"

Animal::Animal(string symbol, short x, short y)
	: GameObject(symbol, {x, y})
	, follower(nullptr)
{
}

void Animal::Update()
{
	if (follower == nullptr)
	{
		if (GetAsyncKeyState(VK_UP) & 0x8000)
			position.Y--;
		else if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			position.Y++;

		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			position.X--;
		else if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			position.X++;

		return;
	}
	
	position.X = follower->Position().X - 5;
	position.Y = follower->Position().Y;
}

void Animal::Render()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	
	TEXTCOLOR_MAGENTA;
	cout << symbol;
	TEXTCOLOR_WHITE;
}
