#include "../stdafx.h"
#include "RelationalDemo.h"
#include <stdio.h> //C (printf, scanf)
#include <iostream> //C++ (cout, cin)

int pivot;
int input;

void RelationalDemo::Initialize()
{
	pivot = 10;
	input = 0;
}

void RelationalDemo::Print()
{
	PrintFile;
	cout << "관계 연산자를 사용해보기" << endl;
	cout << "-----------------------" << endl;

	cout << "숫자 하나 입력하세요 : ";
	cin >> input;

	bool result;
	result = input == pivot; //같다
	cout << "input == pivot : " << result << endl;

	result = input != pivot; //같지않다
	cout << "input != pivot : " << result << endl;

	result = input > pivot; //크다
	cout << "input > pivot : " << result << endl;

	result = input < pivot; //작다
	cout << "input < pivot : " << result << endl;

	result = input >= pivot; //크거나 같다
	cout << "input > pivot : " << result << endl;

	result = input <= pivot; //작거나 같다
	cout << "input < pivot : " << result << endl;

	cout << endl << endl;
}

void RelationalDemo::Execute()
{
	
	Initialize();
	Print();
}