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
	cout << "포인터 변수의 주소를 저장해보자" << endl;
	cout << "---------------------------" << endl;
	long** pptr = nullptr;

	long lNumber = 11;
	long* ptr = &lNumber;
	pptr = &ptr;

	cout << "pptr의 값 : " << pptr << "\t &ptr의 주소는 : " << &ptr << endl;
	cout << "*pptr의 값 : " << *pptr << "\t &lNumber의 주소는 : " << &lNumber << endl;
	cout << "**pptr의 값 : " << **pptr << "\t lNumber의 값은 : " << lNumber << endl;
	cout << endl << endl;
#endif

#ifndef DynamicDoubleArray
	while (true)
	{
		cout << "2차원 동적 배열이란" << endl;
		cout << "-----------------" << endl;
		int rows, cols;
		cout << "줄 : ";
		cin >> rows;
		cout << "칸 : ";
		cin >> cols;

		long** pptr = new long*[rows];
		for (int i = 0; i < rows; i++)
			pptr[i] = new long[cols];

		//초기화(연번)
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
				pptr[i][j] = (i * cols) + j;
		}

		//출력
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

	cout << "더블포인터를 이용한 Call By Address" << endl;
	cout << "---------------------------------" << endl;
	int* myAccount = nullptr;
	
	//Call By Value
	CreateAccount(myAccount);

	if (myAccount != nullptr)
	{
		cout << "내 통장이 개설됐당^0^" << endl;
		cout << "잔고 : " << *myAccount << endl;
	}
	else
	{
		cout << "귀하는 통장이 없는 거지입니다." << endl;
	}
	cout << endl << endl;

	//Call By Address
	CreateAccount(&myAccount);
	if (myAccount != nullptr)
	{
		cout << "내 통장이 개설됐당^0^" << endl;
		cout << "잔고 : " << *myAccount << endl;
	}
	else
	{
		cout << "귀하는 통장이 없는 거지입니다." << endl;
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
