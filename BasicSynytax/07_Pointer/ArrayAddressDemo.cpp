#include "../stdafx.h"
#include "ArrayAddressDemo.h"

#define D1Array
#define D2Array

void ArrayAddressDemo::Initialize()
{
	
}

void ArrayAddressDemo::Print()
{
#ifndef D1Array
	cout << "�迭 ������Ʈ �ּҸ� ����" << endl;
	cout << "---------------------" << endl;
	int nArr[] = { 11, 12, 13, 14 };
	short sArr[] = { 1, 2, 3, 4};

	cout << "int Ÿ��" << endl;
	cout << "&nArr[0] : " << &nArr[0] << endl;
	cout << "&nArr[1] : " << &nArr[1] << endl;
	cout << "&nArr[2] : " << &nArr[2] << endl;
	cout << "&nArr[3] : " << &nArr[3] << endl;
	cout << endl << endl;

	cout << "short Ÿ��" << endl;
	for (int i = 0; i < 4; i++)
		cout << "&sArr[" << i << "] : " << &sArr[i] << endl;
	cout << endl << endl;

	cout << "�迭�� ���� �ּҸ� ����" << endl;
	cout << "--------------------" << endl;
	cout << "nArr : " << nArr << endl;
	cout << "sArr : " << sArr << endl;
	cout << endl << endl;

	cout << "�ּҿ� �����ڸ� �Ẹ��" << endl;
	cout << "--------------------" << endl;
	cout << "nArr + 0 : " << nArr + 0 << endl;//&nArr[0]
	cout << "nArr + 1 : " << nArr + 1 << endl;//&nArr[1]
	cout << "nArr + 2 : " << nArr + 2 << endl;//&nArr[2]
	cout << "nArr + 3 : " << nArr + 3 << endl;//&nArr[3]
	cout << endl << endl;

	cout << "�迭�� �����ּ�(�迭�� �̸� == ������)�� �̿��ؼ� ������Ʈ ���� �����غ���" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	*(sArr + 1) = 101; //sArr[1] = 101
	cout << sArr[1] << endl;
	sArr[2] = 102;
	cout << *(sArr + 2) << endl;
#endif

#ifndef D2Array
	short arr[2][3] = { {10, 20, 30}, {40, 50, 60} };
	cout << "2���� �迭�� ���� �ּ�" << endl;
	cout << "----------------------" << endl;
	cout << "arr : " << arr << endl;
	cout << "arr[0] : " << arr[0] << endl;
	cout << "&arr[0][0] : " << &arr[0][0] << endl;
	cout << endl;

	cout << "arr[1] : " << arr[1] << endl;
	cout << "&arr[1][0] : " << arr[1] << endl;
	cout << endl << endl;

	cout << "�迭 �ּҿ� �� ����" << endl;
	cout << "-------------------" << endl;
	cout << "[0][0]���� -> arr[0][0]" << endl;
	arr[0][0] = 990;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << ", ";
		cout << endl;
	}
	cout << endl;

	cout << "[0][0] ���� -> *arr[0]" << endl;
	*arr[0] = 991;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << ", ";
		cout << endl;
	}
	cout << endl;

	cout << "[0][1]���� -> arr[0][1]" << endl;
	arr[0][1] = 992;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << ", ";
		cout << endl;
	}
	cout << endl;

	cout << "[0][2]���� *(arr + 0)[2]" << endl;
	//(*arr + 0)[2] = 993; 
	(*(*(arr + 0) + 2)) = 993; //arr[0][2]
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << ", ";
		cout << endl;
	}
	cout << endl;

	cout << "[1][0]���� -> arr[1][0]" << endl;
	arr[1][0] = 994;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << ", ";
		cout << endl;
	}
	cout << endl;

	cout << "[1][1]���� -> (*arr + 3)[1]" << endl;
	(*arr + 3)[1] = 995;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << ", ";
		cout << endl;
	}
	cout << endl;

	cout << "[1][2]���� -> (*(*(arr + 1) +2))" << endl;
	(*(*(arr + 1) + 2)) = 996;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << ", ";
		cout << endl;
	}
	cout << endl;
#endif

	int capacity;
	cout << "�迭�� ũ�⸦ ���϶� : ";
	cin >> capacity;
	int* arr = new int[capacity];
	
	InitializeArray(arr, capacity);
	PrintArray(arr, capacity);

	delete[] arr;
}


void ArrayAddressDemo::Execute()
{
	Initialize();
	Print();
}

void ArrayAddressDemo::InitializeArray(int * address, int capacity)
{
	for (int i = 0; i < capacity; i++)
		*(address + i) = i; //arr[i] = i
}

void ArrayAddressDemo::PrintArray(int * address, int capacity)
{
	int cols = static_cast<int>(sqrt(capacity));

	cout << "���� ���� : " << cols << endl;

	for (int i = 0; i < capacity; i++)
	{
		cout << address[i] << "\t";

		if (i % cols == cols - 1)
			cout << endl << endl;
	}
	cout << endl;
}
