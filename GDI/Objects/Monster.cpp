#include "stdafx.h"
#include "Monster.h"

Monster::Monster(wstring path, Vector2 position, float moveSpeed)
	: Object(path, position, moveSpeed)
{
	alertIcon = new Image(L"../_Images/Exclamation.png");
}

Monster::~Monster()
{
	SAFE_DELETE(alertIcon);
}

void Monster::Update()
{
	if (IsInSight() == true)
	{
		position.X += direction.X * moveSpeed;
		position.Y += direction.Y * moveSpeed;
	}
}

void Monster::Render()
{
	Renderer::Get()->Render(image, position.X, position.Y);

	if (IsInSight() == true)
		Renderer::Get()->Render(alertIcon, position.X + image->GetWidth() * 0.5f, position.Y - image->GetHeight() * 0.5f);
}

bool Monster::IsInSight()
{
	float distanceX = traceTarget->GetPosition().X - this->position.X;
	float distanceY = traceTarget->GetPosition().Y - this->position.Y;
	float length = sqrt(distanceX * distanceX + distanceY * distanceY);

	//normalize
	direction = Vector2(distanceX / length, distanceY / length);

	if (length <= 75)
		return false;

	if (length <= sightRadius)
		return true;

	return false;
}