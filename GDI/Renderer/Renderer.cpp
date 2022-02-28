#include "stdafx.h"
#include "Renderer.h"

Renderer* Renderer::instance = nullptr;

void Renderer::Create()
{
	if (instance == nullptr)
		instance = new Renderer();
}

void Renderer::Delete()
{
	SAFE_DELETE(instance);
}

Renderer * Renderer::Get()
{
	return instance;
}

Renderer::Renderer()
{
	dc = GetDC(Device::Get()->GetHwnd());
	frontBuffer = new Graphics(dc);

	RECT rt;
	GetClientRect(Device::Get()->GetHwnd(), &rt);
	bitmap = new Bitmap(rt.right, rt.bottom);
	backBuffer = new Graphics(bitmap);
}

Renderer::~Renderer()
{
	SAFE_DELETE(frontBuffer);
	SAFE_DELETE(backBuffer);
	SAFE_DELETE(bitmap);
}

void Renderer::PreRender()
{
	backBuffer->Clear(Gdiplus::Color::Black);
}

void Renderer::Render(Image * image, float x, float y)
{
	backBuffer->DrawImage(image, x, y);
}

void Renderer::PostRender()
{
	frontBuffer->DrawImage(bitmap, 0, 0);
}
