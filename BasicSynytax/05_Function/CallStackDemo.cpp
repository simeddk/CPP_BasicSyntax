#include "../stdafx.h"
#include "CallStackDemo.h"

void CallStackDemo::Initialize()
{
	
}

void CallStackDemo::Print()
{
	PrintFile;

	long a;
	a = 100;
	a = 555;
	cout << a << endl;

	cout << "�ݽ����̶�" << endl;
	cout << "--------------------" << endl;

	int input1, input2;
	while (true)
	{
		cout << "ù�� : ";
		cin >> input1;
		cout << "�μ� : ";
		cin >> input2;

		if (IsSumOdd(input1, input2))
			cout << "�� ���� ���� Ȧ��" << endl;
		else
			cout << "�� ���� ���� ¦��" << endl;
		
		int a = 10;
	}

}

void CallStackDemo::Execute()
{
	Initialize();
	Print();
}

bool IsSumOdd(int val1, int val2)
{
	int sum = Sum(val1, val2);

	return IsOdd(sum);
}

int Sum(int num1, int num2)
{
	return num1 + num2;
}

bool IsOdd(int number)
{
	return static_cast<bool>(number & 1);
}
