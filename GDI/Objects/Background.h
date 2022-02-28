#pragma once

#include "GameObject.h"

class Background : public Object
{
public:
	Background(wstring path);

	virtual void Update() override;
	virtual void Render() override;
};