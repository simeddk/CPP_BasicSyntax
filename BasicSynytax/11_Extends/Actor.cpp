#include "../stdafx.h"
#include "Actor.h"

Actor::Actor() 
	: symbol("X")
	, position({0, 0})
{
	cout << "부모의 생성자가 호출됨" << endl;
}

Actor::Actor(string symbol, SHORT x, SHORT y)
	: symbol(symbol)
	, position({x, y})
{
	cout << "부모의 생성자가 호출됨" << endl;
}

Actor::~Actor()
{
	cout << "부모의 소멸자가 호출됨" << endl;
}

void Actor::Update()
{
	if (GetAsyncKeyState(VK_UP))
		position.Y--;
	else if (GetAsyncKeyState(VK_DOWN))
		position.Y++;

	if (GetAsyncKeyState(VK_LEFT))
		position.X--;
	else if (GetAsyncKeyState(VK_RIGHT))
		position.X++;

}

void Actor::Render()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	cout << symbol << endl;
}
