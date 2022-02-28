#include "../stdafx.h"
#include "TernaryDemo.h"


void TernaryDemo::Initialize()
{
	
}

void TernaryDemo::Print()
{
	PrintFile;
	cout << "삼항연산자를 사용해보자" << endl;
	cout << "--------------------" << endl;

	int inputA, inputB;
	cin >> inputA >> inputB;
	
	int max;
	(inputA > inputB) ? max = inputA : max = inputB;
	cout << "둘 중 더 큰수는 : " << max << endl;

	int min = (inputA < inputB) ? inputA : inputB;
	cout << "둘 중 더 작은 수는 : " << min << endl;
	cout << endl << endl;
}

void TernaryDemo::Execute()
{
	Initialize();
	Print();
}


