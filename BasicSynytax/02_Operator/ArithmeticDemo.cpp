#include "../stdafx.h"
#include "ArithmeticDemo.h"

int a;
int b;

void ArithmeticDemo::Initialize()
{
	a = 10;
	b = 3;
}

void ArithmeticDemo::Print()
{
	PrintFile;
	cout << "��Ģ������ �غ���" << endl;
	cout << "--------------" << endl;

	int result;
	result = a + b;
	cout << "���� : " << result << endl;

	result = a - b;
	cout << "���� : " << result << endl;

	result = a * b;
	cout << "���� : " << result << endl;

	result = a / b;
	cout << "������ : " << result << endl;

	result = a % b; //mod, ������ ����
	cout << "������ : " << result << endl;
	cout << endl << endl;

	cout << "������ �����" << endl;
	cout << "-------------" << endl;
	result = a + b * a - b; //10 + 3 * 10 - 3 -> 37
	cout << result << endl;

	result = ((a + b) * a) - b; //((10 + 3) * 10) - 3 -> 127
	cout << result << endl;

	cout << endl << endl;
}

void ArithmeticDemo::Execute()
{
	Initialize();
	Print();
}