#include "../stdafx.h"
#include "CallByDemo.h"


void CallByDemo::Initialize()
{
	
}

void CallByDemo::Print()
{
	int a = 100, b = 200;

	cout << "Call By Value" << endl;
	cout << "----------------" << endl;
	cout << __FUNCTION__ << ": " << a << ", " << b << endl; //100, 200
	CallByValue(a, b); //200, 100
	cout << __FUNCTION__ << ": " << a << ", " << b << endl; //100, 200
	cout << endl << endl;

	cout << "Call By Address" << endl;
	cout << "----------------" << endl;
	cout << __FUNCTION__ << ": " << a << ", " << b << endl; //100, 200
	CallByAddress(&a, &b);
	cout << __FUNCTION__ << ": " << a << ", " << b << endl;
	cout << endl << endl;

	/*cout << "레퍼런스란" << endl;
	cout << "------------------" << endl;
	int& c = a;
	cout << "a의 주소 : " << &a << endl;
	cout << "c의 주소 : " << &c << endl;
	c = 999;
	cout << a << endl;
	cout << endl << endl;*/

	cout << "Call By Reference" << endl;
	cout << "----------------" << endl;
	cout << __FUNCTION__ << ": " << a << ", " << b << endl;
	CallByReference(a, b); //복사가 발생하지 않음!!
	cout << __FUNCTION__ << ": " << a << ", " << b << endl;
	cout << endl << endl;
}

void CallByDemo::Execute()
{
	Initialize();
	Print();
}

void CallByDemo::CallByValue(int val1, int val2)
{
	int temp = val1;
	val1 = val2;
	val2 = temp;

	TEXTCOLOR_CYAN;
	cout << __FUNCTION__ << ": " << val1 << ", " << val2 << endl;
	TEXTCOLOR_WHITE;
}

void CallByDemo::CallByAddress(int * ptr1, int * ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	TEXTCOLOR_CYAN;
	cout << __FUNCTION__ << ": " << *ptr1 << ", " << *ptr2 << endl;
	TEXTCOLOR_WHITE;
}

void CallByDemo::CallByReference(int & ref1, int & ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;

	TEXTCOLOR_CYAN;
	cout << __FUNCTION__ << ": " << ref1 << ", " << ref2 << endl;
	TEXTCOLOR_WHITE;
}
