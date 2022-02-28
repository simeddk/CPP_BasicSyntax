#pragma once

#include "GameObject.h"

class Character : public GameObject
{
public:
	Character(string symbol, short x, short y);
	
	void Update() override;
	void Render() override;
};