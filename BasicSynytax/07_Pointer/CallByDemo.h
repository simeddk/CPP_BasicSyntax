#pragma once

namespace CallByDemo
{
	void Initialize();
	void Print();
	void Execute();

	void CallByValue(int val1, int val2);
	void CallByAddress(int* ptr1, int* ptr2);
	void CallByReference(int& ref1, int& ref2);
}


