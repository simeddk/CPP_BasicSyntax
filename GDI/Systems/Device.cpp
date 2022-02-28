#include "stdafx.h"
#include "Device.h"

Device* Device::instance = nullptr;

void Device::Create()
{
	if (instance == nullptr)
		instance = new Device();
}

void Device::Delete()
{
	SAFE_DELETE(instance);
}

Device::Device()
{
	system("mode con:cols=100 lines=40");

	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	hwnd = GetConsoleWindow();

	GdiplusStartupInput input;
	GdiplusStartup(&token, &input, nullptr);
}

Device::~Device()
{
	GdiplusShutdown(token);
}