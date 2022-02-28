#include "../stdafx.h"
#include "TypedefDemo.h"

typedef int int32;
typedef long long int64;
typedef unsigned int uint32;
typedef unsigned long long uint64;

//Global Variable
int32 number1;
int64 number2;
uint32 number3;
uint64 number4;
UINT number5;

void TypedefDemo::Initialize()
{
	int var = -50; //Local Variable
	number1 = var;
	number2 = var;
	
	number3 = -var; //--50
	number4 = -var;
}

void TypedefDemo::Print()
{
	
	TEXTCOLOR_GREEN;
	cout << __FILE__ << endl;
	cout << __FUNCTION__ << endl;

	cout << "int32 : " << number1 << endl;
	cout << "int64 : " << number2 << endl;
	cout << "uint32 : " << number3 << endl;
	cout << "uint64 : " << number4 << endl;
	cout << endl << endl;
}

void TypedefDemo::Execute()
{
	Initialize();
	Print();
}