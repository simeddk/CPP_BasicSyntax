#include "../stdafx.h"
#include "OperatorOverloading.h"

Color3 color3 = { 255, 0, 0 };
Color4 color4 = { 0, 0, 255, 255 };

void OperatorOverloading::Initialize()
{
	
}

void OperatorOverloading::Print()
{
	cout << "이런것도 연산이 가능한가?" << endl;
	cout << "------------------------" << endl;
	string str1 = "과제를 ";
	string str2 = "열심히 하자";
	string str3 = str1 + str2;
	cout << str3 << endl;

	cout << "연산자 오버로딩 만들기" << endl;
	cout << "------------------------" << endl;
	color4 = color3 + color4;
	color4.Colors();
	cout << endl << endl;

	color4 /= 255.0f;
	color4.Colors();

	Color3 c1 = { 200, 100, 100 };
	Color3 c2 = { 150, 200, 200 };

	//오버로딩 불가 연산자
	//sizeof, ::, ?:, ,(콤보), .(닷), *(포인터)
	//원래 C에서 제공하는 연산자만 오버로딩 ($, @)
	//연산자의 우선순위 변경 불가
	//[]<----
	//new<----
	// =<----
	//Khan Academy -> 선형대수학, 삼각함수
}

void OperatorOverloading::Execute()
{
	Initialize();
	Print();
}

 