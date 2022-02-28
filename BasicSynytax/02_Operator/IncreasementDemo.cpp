#include "../stdafx.h"
#include "IncreasementDemo.h"

int num1;
int num2;

void IncreasementDemo::Initialize()
{
	num1 = num2 = 0;
}

void IncreasementDemo::Print()
{
	PrintFile;
	
	cout << "����(����)������ �غ���" << endl;
	cout << "---------------" << endl;

	num1 = num1 + 1;
	cout << "num1 = num1 + 1 : " << num1 << endl; //num1 = 1

	num1 += 1;
	cout << "num1 += 1 : " << num1 << endl; //num1 = 2
	cout << endl;

	//++ : 1�� ����, -- : 1�� ����
	cout << "Postfix" << endl;
	cout << num2++ << endl; 
	cout << num2 << endl;

	cout << "Prefix" << endl; 
	cout << ++num2 << endl; //2
	cout << --num2 << endl; //1
	cout << num2-- << endl; //1
	cout << num2++ << endl; //0
	cout << num2 << endl; //1
	

}

void IncreasementDemo::Execute()
{
	Initialize();
	Print();
}