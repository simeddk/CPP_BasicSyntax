#include "stdafx.h"
#include "Timer.h"

Timer::Timer()
{
	prevTime = GetTickCount64();
}

void Timer::Update()
{
	if (delay == 0)
	{
		cout << "������ ������ �ȵƱ�.." << endl;
		return;
	}

	ULONGLONG currentTime = GetTickCount64();
	currentTime -= prevTime;

	if (currentTime > delay)
	{
		bElapsed = true;
		prevTime = GetTickCount64();
	}
	else
	{
		bElapsed = false;
	}

}
