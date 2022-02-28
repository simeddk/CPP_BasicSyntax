#pragma once

class HasStatic
{
public:
	HasStatic();
	~HasStatic();

	float GetPi() { return pi; }

	UINT MemberCount() { return count; }
	static UINT StaticCount() { return sCount; }

//private:
public:
	static float pi;

private:
	UINT count = 0;
	static UINT sCount;
};

