#include "stdafx.h"
#include "Npc.h"

Npc::Npc(wstring path, Vector2 position, float moveSpeed)
	: Object(path, position, moveSpeed)
{
	
}

void Npc::Update()
{
	if (lookAtTarget == nullptr)
		return;

	if (ChangedDirection() == true)
		image->RotateFlip(Rotate180FlipY);
}

void Npc::Render()
{
	Renderer::Get()->Render(image, position.X, position.Y);
}

bool Npc::ChangedDirection()
{
	bLookAtRight = (this->position.X) < lookAtTarget->GetPosition().X;

	if (bLookAtRight != prevState)
	{
		prevState = bLookAtRight;
		return true;
	}

	return false;
}