#include "stdafx.h"
#include "Enemy.h"
#include "Timer.h"
#include "Player.h"

Enemy::Enemy(SHORT x, SHORT y)
	: x(x)
	, y(y)
{
	timer = new Timer();
	timer->SetDelay(1000);
}

Enemy::~Enemy()
{
	delete timer;
	timer = nullptr;
}

void Enemy::Update()
{
	timer->Update();

	SetBehavior();

	switch (state)
	{
		case EStateType::Approach:	Approach();	break;
		case EStateType::Attack:	Attack();	break;
	}
}

void Enemy::Render()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });
	cout << "E";

	if (state == EStateType::Approach)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y - 1 });
		cout << "!";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	}
}

COORD Enemy::GetPosition()
{
	return {x, y};
}

void Enemy::SetBehavior()
{
	if (target == nullptr) return;

	int dx = abs(x - target->GetPosition().X);
	int dy = abs(y - target->GetPosition().Y);

	distance =  static_cast<int>(sqrt(dx * dx + dy * dy));

	if (distance <= meleeRadius)
		state = EStateType::Attack;
	else if (distance <= sightRadius)
		state = EStateType::Approach;
	else if (distance > sightRadius)
		state = EStateType::Idle;
}

void Enemy::Approach()
{
	if (target == nullptr) return;
	if (timer->IsElapsed() == false) return;

	int dx = target->GetPosition().X - x;
	int dy = target->GetPosition().Y - y;

	//어떤 벡터의 크기를 / 길이(힘) -> 방향
	direction.X = static_cast<SHORT>((float)dx / (float)abs(dx));
	direction.Y = static_cast<SHORT>((float)dy / (float)abs(dy));
	//-> Normalize -> -1 ~ 1

	x += direction.X;
	y += direction.Y;
}

void Enemy::Attack()
{
	if (target == nullptr) return;
	if (timer->IsElapsed() == false) return;

	int hp = target->GetHP();
	hp -= atk;
	target->SetHP(hp);
}
