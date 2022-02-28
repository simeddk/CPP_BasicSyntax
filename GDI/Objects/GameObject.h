#pragma once

struct Vector2
{
	float X;
	float Y;

	Vector2()
		:X(0), Y(0)
	{}

	Vector2(float X, float Y)
		: X(X), Y(Y)
	{}
};

class Object
{
public:
	Object(wstring path = L"", Vector2 position = Vector2(0, 0), float moveSpeed = 10.0f);
	virtual ~Object();

	virtual void Update() = 0;
	virtual void Render() = 0;

public:
	Object* SetPosition(const Vector2& vec);
	Object* SetImage(wstring path);
	Object* SetMoveSpeed(float moveSpeed);

	Vector2 GetPosition() { return position; }

protected:
	Image* image = nullptr;

	Vector2 position = Vector2(0, 0);
	float moveSpeed = 10.0f;
};