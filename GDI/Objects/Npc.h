#pragma once

#include "GameObject.h"

class Npc : public Object
{
public:
	Npc(wstring path = L"", Vector2 position = Vector2(0, 0), float moveSpeed = 10.0f);

	virtual void Update() override;
	virtual void Render() override;

	void SetLookAtTarget(Object* lokAt) { lookAtTarget = lokAt; }

private:
	bool ChangedDirection();

private:
	Object* lookAtTarget = nullptr;
	bool bLookAtRight = false;
	bool prevState = false;
};