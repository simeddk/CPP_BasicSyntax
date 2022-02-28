#include "stdafx.h"
#include "GameObject.h"

Object::Object(wstring path, Vector2 position, float moveSpeed)
	: position(position)
	, moveSpeed(moveSpeed)
{
	if (path.size() > 1)
		image = new Image(path.c_str());
}

Object::~Object()
{
	SAFE_DELETE(image);
}

Object * Object::SetPosition(const Vector2 & vec)
{
	position = vec;

	return this;
}

Object * Object::SetImage(wstring path)
{
	SAFE_DELETE(image);
	image = new Image(path.c_str());

	return this;
}

Object * Object::SetMoveSpeed(float moveSpeed)
{
	this->moveSpeed = moveSpeed;

	return this;
}
