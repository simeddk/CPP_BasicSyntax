#include "stdafx.h"
#include "Background.h"

Background::Background(wstring path)
	: Object(path)
{
	
}

void Background::Update()
{

}

void Background::Render()
{
	Renderer::Get()->Render(image);
}