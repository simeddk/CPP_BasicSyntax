#pragma once
class Enemy
{
public:
	Enemy(SHORT x, SHORT y);
	~Enemy();

	void Update();
	void Render();

	COORD GetPosition();

	int GetHP() { return hp; }
	void SetHP(int hp) { this->hp = hp; }

	int GetAtk() { return atk; }

	EStateType GetState() { return state; }

	void SetTarget(class Player* target) { this->target = target; }

private:
	void SetBehavior();
	void Approach();
	void Attack();

private:
	SHORT x;
	SHORT y;

	int hp = 50;
	int atk = 10;

	int sightRadius = 10;
	int meleeRadius = 3;

	EStateType state = EStateType::Idle;

	class Player* target = nullptr;
	class Timer* timer = nullptr;

	int distance = 0;
	COORD direction = { 0, 0 };
};

