#pragma once

#include "GameObject.h"

class Player : public Object
{
public:
	Player(wstring path = L"", Vector2 position = Vector2(0, 0), float moveSpeed = 10.0f);
	~Player();

	void Update() override;
	void Render() override;


private:
	void Move();

private:
	enum class EDirectionType
	{
		Left, Right
	};

	EDirectionType currentDirection = EDirectionType::Left;
	EDirectionType prevDirection = EDirectionType::Left;
};
