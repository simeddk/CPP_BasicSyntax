#include "../stdafx.h"
#include "DoublePointerDemo.h"

#define DoublePointer
#define DynamicDoubleArray

void DoublePointerDemo::Initialize()
{
	
}

void DoublePointerDemo::Print()
{
#ifndef DoublePointer
	cout << "������ ������ �ּҸ� �����غ���" << endl;
	cout << "---------------------------" << endl;
	long** pptr = nullptr;

	long lNumber = 11;
	long* ptr = &lNumber;
	pptr = &ptr;

	cout << "pptr�� �� : " << pptr << "\t &ptr�� �ּҴ� : " << &ptr << endl;
	cout << "*pptr�� �� : " << *pptr << "\t &lNumber�� �ּҴ� : " << &lNumber << endl;
	cout << "**pptr�� �� : " << **pptr << "\t lNumber�� ���� : " << lNumber << endl;
	cout << endl << endl;
#endif

#ifndef DynamicDoubleArray
	while (true)
	{
		cout << "2���� ���� �迭�̶�" << endl;
		cout << "-----------------" << endl;
		int rows, cols;
		cout << "�� : ";
		cin >> rows;
		cout << "ĭ : ";
		cin >> cols;

		long** pptr = new long*[rows];
		for (int i = 0; i < rows; i++)
			pptr[i] = new long[cols];

		//�ʱ�ȭ(����)
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
				pptr[i][j] = (i * cols) + j;
		}

		//���
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
				cout << pptr[i][j] << "\t";
			cout << endl << endl;
		}

		for (int i = 0; i < rows; i++)
			delete[] pptr[i];

		delete[] pptr;

	}//while
#endif

	cout << "���������͸� �̿��� Call By Address" << endl;
	cout << "---------------------------------" << endl;
	int* myAccount = nullptr;
	
	//Call By Value
	CreateAccount(myAccount);

	if (myAccount != nullptr)
	{
		cout << "�� ������ �����ƴ�^0^" << endl;
		cout << "�ܰ� : " << *myAccount << endl;
	}
	else
	{
		cout << "���ϴ� ������ ���� �����Դϴ�." << endl;
	}
	cout << endl << endl;

	//Call By Address
	CreateAccount(&myAccount);
	if (myAccount != nullptr)
	{
		cout << "�� ������ �����ƴ�^0^" << endl;
		cout << "�ܰ� : " << *myAccount << endl;
	}
	else
	{
		cout << "���ϴ� ������ ���� �����Դϴ�." << endl;
	}
	delete myAccount;

	int a = 10;
	float b = 20.f;
	void* p;
	 
	p = &a;
	cout << *(int*)p << endl;
	
}

void DoublePointerDemo::Execute()
{
	Initialize();
	Print();
}

void CreateAccount(int * account)
{
	account = new int(100000000);
}

void CreateAccount(int ** account)
{
	*account = new int;
	**account = 100000000;
}
