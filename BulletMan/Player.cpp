#include "..\GDI\Objects\Player.h"
#include "..\GDI\Objects\Player.h"
#include "stdafx.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

Player::Player(SHORT x, SHORT y)
	: x(x)
	, y(y)
{
	prevHp = hp;
}

Player::~Player()
{
	delete bullet;
	bullet = nullptr;
}

void Player::Update()
{
	Move();
	Shoot();

	if (bullet != nullptr)
	{
		bullet->SetDirection(bulletDirection);
		bullet->Update();

		if (target != nullptr)
		{
			if (bullet->GetPosition().X == target->GetPosition().X &&
				bullet->GetPosition().Y == target->GetPosition().Y)
			{
				int hp = target->GetHP();
				hp -= atk;
				target->SetHP(hp);

				delete bullet;
				bullet = nullptr;
			}//if (총알과 적의 충돌)
		} //if (target != nullptr)
	} //if (bullet != nullptr)
}

void Player::Render()
{
	if (bullet != nullptr)
		bullet->Render();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	if (prevHp != hp)
	{
		prevHp = hp;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	}

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });
	cout << "P";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

COORD Player::GetPosition()
{
	return {x, y};
}

void Player::Move()
{
	if (GetAsyncKeyState('A') & 0x8000)
		x--;
	else if (GetAsyncKeyState('D') & 0x8000)
		x++;

	if (GetAsyncKeyState('W') & 0x8000)
		y--;
	else if (GetAsyncKeyState('S') & 0x8000)
		y++;
}

void Player::Shoot()
{
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		Shoot(EDirectionType::Left);
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		Shoot(EDirectionType::Right);

	if (GetAsyncKeyState(VK_UP) & 0x8000)
		Shoot(EDirectionType::Up);
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		Shoot(EDirectionType::Down);
}

void Player::Shoot(EDirectionType direction)
{
	bulletDirection = direction;

	delete bullet;
	bullet = nullptr;

	bullet = new Bullet(x, y);
}
