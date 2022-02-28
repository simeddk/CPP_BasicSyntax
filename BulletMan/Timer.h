#pragma once
class Timer
{
public:
	Timer();

	void Update();

	void SetDelay(ULONGLONG delay) { this->delay = delay; }
	bool IsElapsed() { return bElapsed; }

private:
	ULONGLONG prevTime;
	ULONGLONG delay = 0;

	bool bElapsed = false;
};

