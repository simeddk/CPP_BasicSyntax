#include "stdafx.h"
#include "Player.h"

Player::Player(wstring path, Vector2 position, float moveSpeed)
	: Object(path, position, moveSpeed)
{

}

Player::~Player()
{

}

void Player::Update()
{
	Move();

	if (prevDirection != currentDirection)
	{
		prevDirection = currentDirection;
		image->RotateFlip(Gdiplus::RotateFlipType::Rotate180FlipY);
	}
}

void Player::Render()
{
	Renderer::Get()->Render(image, position.X, position.Y);
}

void Player::Move()
{
	if (GetAsyncKeyState('A') & 0x8000)
	{
		position.X -= moveSpeed;
		currentDirection = EDirectionType::Left;
	}
	else if (GetAsyncKeyState('D') & 0x8000)
	{
		position.X += moveSpeed;
		currentDirection = EDirectionType::Right;
	}

	if (GetAsyncKeyState('W') & 0x8000)
	{
		position.Y -= moveSpeed;
	}
	else if (GetAsyncKeyState('S') & 0x8000)
	{
		position.Y += moveSpeed;
	}

	RECT rt;
	GetClientRect(Device::Get()->GetHwnd(), &rt);

	if (position.X < rt.left)
		position.X = rt.left;

	if (position.X > rt.right)
		position.X = rt.right;

	if (position.Y > rt.bottom)
		position.Y = rt.bottom;

	if (position.Y < rt.top)
		position.Y = rt.top;
}