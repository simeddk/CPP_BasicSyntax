#include "../stdafx.h"
#include "HW_0113.h"

#define IsOdd
#define Floor
#define Ceil

void HW_0113::Initialize()
{
	
}

void HW_0113::Print()
{
#ifndef IsOdd
	//(1)�� �� �̳��� Ȧ¦ ���� -> ���ͳ� �˻�
	int input;
	cin >> input, (input & 1 == 1) ? cout << "Ȧ\n" : cout << "¦\n";
#endif


#ifndef Floor
	//(2)�Ҽ��� ������
	cout << "Floor" << endl;
	float fNumber;
	cout << "�Ǽ� �Է� : ";
	cin >> fNumber;
	cout << "floor : " << static_cast<int>(fNumber) << endl;
#endif

#ifndef Ceil
	//(3)�Ҽ��� 0.1 �̻� ������ �����ڸ� �ø�(3.1 -> 4)
	float fNumber;
	cout << "�Ǽ� �Է� : ";
	cin >> fNumber;
	float temp = fNumber - static_cast<int>(fNumber);

	temp *= 100;
	if (temp >= 10)
		fNumber += 1.0f;

	cout << static_cast<int>(fNumber) << endl;
#endif

}

void HW_0113::Execute()
{
	Initialize();
	Print();
}

