#include "../stdafx.h"
#include "Architecture.h"

Architecture::Architecture(string symbol, short x, short y)
	: GameObject(symbol, {x, y})
	, bVisited(false)
{
}

void Architecture::Update()
{
	if (bVisited == true)
		symbol = "∞°∫√¿Ω";
}

void Architecture::Render()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	
	TEXTCOLOR_CYAN;
	cout << symbol;
	TEXTCOLOR_WHITE;
}
