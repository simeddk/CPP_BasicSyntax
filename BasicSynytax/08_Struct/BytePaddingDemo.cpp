#include "../stdafx.h"
#include "BytePaddingDemo.h"

void BytePaddingDemo::Initialize()
{
	
}

void BytePaddingDemo::Print()
{
	struct Tag1
	{
		int a; //4
		short b; //2
		char c; //1
		double d; //8
	};
	cout << sizeof(Tag1) << endl;

	struct Tag2
	{
		short b; //2
		int a; //4
		char c; //1
		double d; //8
	};
	cout << sizeof(Tag2) << endl;

	struct Tag3
	{
		int a; //4
		int b; //4
		char c; //1
		Tag1 tag;
	};
	cout << sizeof(Tag3) << endl;

}

void BytePaddingDemo::Execute()
{
	Initialize();
	Print();
}

 