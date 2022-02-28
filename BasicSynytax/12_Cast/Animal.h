#pragma once

#include "GameObject.h"

class Animal : public GameObject
{
public:
	Animal(string symbol, short x, short y);
	
	void Update() override;
	void Render() override;

	void SetFollower(GameObject* follower) { this->follower = follower; }

private:
	GameObject* follower;
};