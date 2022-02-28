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

	if (position.X < rt.left - image->GetWidth() * 0.5f)
		position.X = rt.left - image->GetWidth() * 0.5f;

	if (position.X > rt.right - image->GetWidth() * 0.5)
		position.X = rt.right - image->GetWidth() * 0.5;

	if (position.Y > rt.bottom - image->GetWidth() * 2.0)
		position.Y = rt.bottom - image->GetWidth() * 2.0;

	if (position.Y < rt.top - image->GetWidth() * 2.0 + 200.f)
		position.Y = rt.top - image->GetWidth() * 2.0 + 200.f;
}