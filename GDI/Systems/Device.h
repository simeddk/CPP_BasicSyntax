#pragma once

class Device
{
public:
	static void Create();
	static void Delete();
	static Device* Get() { return instance; }

	HWND GetHwnd() { return hwnd; }

private:
	Device();
	~Device();

private:
	static Device* instance;

private:
	HWND hwnd;
	ULONG_PTR token;
};