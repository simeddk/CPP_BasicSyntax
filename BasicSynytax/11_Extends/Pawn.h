#pragma once

#include "Actor.h"

class Pawn : public Actor
{
public:
	Pawn();
	Pawn(string symbol, SHORT x, SHORT y);
	~Pawn();

	void SetColorToRed();
	void SetColorToDefault();

	void Update() override;

private:

};