#include "../stdafx.h"
#include "AddressDemo.h"

#define ReadWriteMemory

void AddressDemo::Initialize()
{
	
}

void AddressDemo::Print()
{
#ifndef ReadWriteMemory
	cout << "주소를 저장해보자" << endl;
	cout << "-----------------" << endl;
	int a = 1;
	int* ptr;
	ptr = &a;
	cout << "a의 주소 : " << &a << endl;
	cout << "...를 저장받은 ptr의 값 : " << ptr << endl;
	cout << endl << endl;

	cout << "a의 값을 변경해보자" << endl;
	cout << "-------------------" << endl;
	a = 2;
	cout << "a의 값은 : " << a << endl;
	cout << "ptr의 값은 : " << *ptr << endl; //*포인터 : 저장되어 있는 주소에 들어 있는 값
	cout << endl << endl;
	
	cout << "*ptr을 이용해 a의 값을 고쳐쓰기" << endl;
	cout << "-----------------------------" << endl;
	*ptr = 3;
	cout << "a의 값 : " << a << endl;
	cout << "*ptr의 값 : " << *ptr << endl;
	cout << endl << endl;

	a = 100;
	cout << "*ptr : " << *ptr << endl;
	*ptr = 999;
	cout << "a : " << a << endl;
	cout << endl << endl;
#endif

	cout << "기본적인 타입 이외에도 구조체도 가능" << endl;
	cout << "---------------------------------" << endl;
	
	struct MyStruct
	{
		string name;
		float value;
	};

	MyStruct strValue;
	MyStruct* strPtr = &strValue;

	//(*strPtr).name = "이름없음";
	//(*strPtr).value = 0.99f;
	strPtr->name = "이름없음";
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
