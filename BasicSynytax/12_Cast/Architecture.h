#pragma once

#include "GameObject.h"

class Architecture : public GameObject
{
public:
	Architecture(string symbol, short x, short y);
	
	void Update() override;
	void Render() override;

	void SetVisit(bool val) { bVisited = val; }

private:
	bool bVisited;
};