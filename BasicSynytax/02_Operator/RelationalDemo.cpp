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
	cout << "���� �����ڸ� ����غ���" << endl;
	cout << "-----------------------" << endl;

	cout << "���� �ϳ� �Է��ϼ��� : ";
	cin >> input;

	bool result;
	result = input == pivot; //����
	cout << "input == pivot : " << result << endl;

	result = input != pivot; //�����ʴ�
	cout << "input != pivot : " << result << endl;

	result = input > pivot; //ũ��
	cout << "input > pivot : " << result << endl;

	result = input < pivot; //�۴�
	cout << "input < pivot : " << result << endl;

	result = input >= pivot; //ũ�ų� ����
	cout << "input > pivot : " << result << endl;

	result = input <= pivot; //�۰ų� ����
	cout << "input < pivot : " << result << endl;

	cout << endl << endl;
}

void RelationalDemo::Execute()
{
	
	Initialize();
	Print();
}