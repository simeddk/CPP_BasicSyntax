#include "../stdafx.h"
#include "FuncDemo.h"

#define Function
#define Parameter
#define Return

void FuncDemo::Initialize()
{
	
}


void FuncDemo::Print()
{
	PrintFile;

#ifndef Function
	cout << "�Լ� ����غ���" << endl;
	cout << "--------------" << endl;
	WhatIsFunc();
#endif
	
#ifndef Parameter
	cout << "�Ķ� ����غ���" << endl;
	cout << "--------------" << endl;
	
	//�� -> �Ʒ��� �ü��� ����
	//* -> �Ʒ��� �ü��� ����
	WhatIsParam(3);
	WhatIsParam((double)5);
	WhatIsParam(10, 'B');
#endif

#ifndef Return
	while (true)
	{
		system("cls");

		float min, max, alpha;
		cout << "min : ";
		cin >> min;
		cout << "max : ";
		cin >> max;
		cout << "alpha : ";
		cin >> alpha;

		float result = WhatIsReturn(min, max, alpha);
		cout << "result : " << result << endl;
		Sleep(1000);
	}
#endif

	int a = 100;
	WhatIsLocalVariable(a);
	cout << __FUNCTION__ << "���� ��� : " <<  &a << endl;
	cout << __FUNCTION__ << "���� ��� : " <<  a << endl;

}

void FuncDemo::Execute()
{
	Initialize();
	Print();
}


void WhatIsFunc()
{
	cout << "���� �Լ��Դϴ�" << endl;
	cout << endl << endl;
}

void WhatIsParam(int floor)
{
	TEXTCOLOR_YELLOW;
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "��";
		}
		cout << endl;
	}
	TEXTCOLOR_WHITE;
}

void WhatIsParam(double floor)
{
	TEXTCOLOR_YELLOW;
	for (int i = 0; i < (int)floor; i++)
	{
		for (int j = i; j < (int)floor; j++)
			cout << "*";
		cout << endl;
	}
	TEXTCOLOR_WHITE;
}

void WhatIsParam(int count, char character)
{
	for (int i = 0; i < count; i++)
		cout << character;
	cout << endl;
}

float WhatIsReturn(float a, float b, float t)
{
	float lerp = (1 - t) * a + b * t;
	return lerp;
}

void WhatIsLocalVariable(int a)
{
	a = 200;
	
	TEXTCOLOR_CYAN;
	cout << __FUNCTION__ << "���� ��� : " << &a << endl;
	cout << __FUNCTION__ << "���� ��� : " << a << endl;
	TEXTCOLOR_WHITE;
}
