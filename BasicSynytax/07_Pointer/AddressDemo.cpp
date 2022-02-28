#include "../stdafx.h"
#include "AddressDemo.h"

#define ReadWriteMemory

void AddressDemo::Initialize()
{
	
}

void AddressDemo::Print()
{
#ifndef ReadWriteMemory
	cout << "�ּҸ� �����غ���" << endl;
	cout << "-----------------" << endl;
	int a = 1;
	int* ptr;
	ptr = &a;
	cout << "a�� �ּ� : " << &a << endl;
	cout << "...�� ������� ptr�� �� : " << ptr << endl;
	cout << endl << endl;

	cout << "a�� ���� �����غ���" << endl;
	cout << "-------------------" << endl;
	a = 2;
	cout << "a�� ���� : " << a << endl;
	cout << "ptr�� ���� : " << *ptr << endl; //*������ : ����Ǿ� �ִ� �ּҿ� ��� �ִ� ��
	cout << endl << endl;
	
	cout << "*ptr�� �̿��� a�� ���� ���ľ���" << endl;
	cout << "-----------------------------" << endl;
	*ptr = 3;
	cout << "a�� �� : " << a << endl;
	cout << "*ptr�� �� : " << *ptr << endl;
	cout << endl << endl;

	a = 100;
	cout << "*ptr : " << *ptr << endl;
	*ptr = 999;
	cout << "a : " << a << endl;
	cout << endl << endl;
#endif

	cout << "�⺻���� Ÿ�� �̿ܿ��� ����ü�� ����" << endl;
	cout << "---------------------------------" << endl;
	
	struct MyStruct
	{
		string name;
		float value;
	};

	MyStruct strValue;
	MyStruct* strPtr = &strValue;

	//(*strPtr).name = "�̸�����";
	//(*strPtr).value = 0.99f;
	strPtr->name = "�̸�����";
	strPtr->value = 0.99f;

	cout << strValue.name << endl;
	cout << strValue.value << endl;

	cout << (*strPtr).name << endl;
	cout << strPtr->value << endl;
		
}

void AddressDemo::Execute()
{
	Initialize();
	Print();
}
