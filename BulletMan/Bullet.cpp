#include "stdafx.h"
#include "Bullet.h"
#include "Timer.h"

Bullet::Bullet(SHORT spawnX, SHORT spawnY)
	: x(spawnX)
	, y(spawnY)
{
	timer = new Timer();
	timer->SetDelay(5);
}

Bullet::~Bullet()
{
	delete timer;
	timer = nullptr;
}

void Bullet::Update()
{
	timer->Update();
	if (timer->IsElapsed() == false) return;

	switch (direction)
	{
		case EDirectionType::Left:	x--;	break;
		case EDirectionType::Up:	y--;	break;
		case EDirectionType::Right:	x++;	break;
		case EDirectionType::Down:	y++;	break;
	}
}

void Bullet::Render()
{
	COORD position = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_BLUE);

	if ((UINT)direction & 1)
		cout << "-";
	else
		cout << "|";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

COORD Bullet::GetPosition()
{
	return { x, y };
}
