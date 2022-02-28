#pragma once

#include "GameObject.h"

class Monster : public Object
{
public:
	Monster(wstring path = L"", Vector2 position = Vector2(0, 0), float moveSpeed = 10.0f);
	~Monster();

	virtual void Update() override;
	virtual void Render() override;

	void SetTraceTarget(Object* trace) { traceTarget = trace; }

private:
	bool IsInSight();

private:
	Object* traceTarget = nullptr;
	
	float sightRadius = 350.0f;
	Vector2 direction = Vector2(0, 0);

	Image* alertIcon = nullptr;
};