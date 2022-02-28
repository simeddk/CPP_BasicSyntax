#pragma once

class Player
{
public:
	Player(SHORT x, SHORT y);
	~Player();

	void Update();
	void Render();

	COORD GetPosition();

	int GetHP() { return hp; }
	void SetHP(int hp) { this->hp = hp; }

	int GetAtk() { return atk; }

	void SetTarget(class Enemy* target) { this->target = target; }

private:
	void Move();

	void Shoot();
	void Shoot(EDirectionType direction);

private:
	SHORT x;
	SHORT y;

	int hp = 100;
	int atk = 5;

	int prevHp;

	class Bullet* bullet = nullptr;
	EDirectionType bulletDirection = EDirectionType::None;

	class Enemy* target = nullptr;
};

