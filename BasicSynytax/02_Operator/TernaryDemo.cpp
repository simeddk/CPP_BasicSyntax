#include "../stdafx.h"
#include "TernaryDemo.h"


void TernaryDemo::Initialize()
{
	
}

void TernaryDemo::Print()
{
	PrintFile;
	cout << "���׿����ڸ� ����غ���" << endl;
	cout << "--------------------" << endl;

	int inputA, inputB;
	cin >> inputA >> inputB;
	
	int max;
	(inputA > inputB) ? max = inputA : max = inputB;
	cout << "�� �� �� ū���� : " << max << endl;

	int min = (inputA < inputB) ? inputA : inputB;
	cout << "�� �� �� ���� ���� : " << min << endl;
	cout << endl << endl;
}

void TernaryDemo::Execute()
{
	Initialize();
	Print();
}


