#pragma once

class Renderer
{
public:
	static void Create();
	static void Delete();
	static Renderer* Get();

private:
	Renderer();
	~Renderer();

public:
	void PreRender();
	void Render(Image* image, float x = 0.0f, float y = 0.0f);
	void PostRender();

private:
	static Renderer* instance;

private:
	HDC dc = nullptr;
	Graphics* frontBuffer = nullptr;

	Bitmap* bitmap = nullptr;
	Graphics* backBuffer = nullptr;
};