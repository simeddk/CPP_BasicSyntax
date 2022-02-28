#include "../stdafx.h"
#include "StaticCastDemo.h"


void StaticCastDemo::Initialize()
{
	
}

void StaticCastDemo::Print()
{
	PrintFile;
	cout << "캐스팅 사용해보기" << endl;
	cout << "----------------" << endl;

	int a = 10;
	int b = 9;

	int c = a / b; // 10 / 9
	cout << "int끼리 나눔 -> int에 저장 : " << c << endl;

	double d = 9;
	d = a / d; // 10 /9
	cout << "int/double 나눔 -> double에 저장(암시적 캐스팅): " << d << endl;

	float e = (float)a / (float)b; //C언어 스타일
	cout << "int/int 나눔 -> float에 저장(명시적 캐스팅) : " << e << endl;

	cout << static_cast<int>(3.141592f) << endl;
	cout << static_cast<char>(67) << endl;
	cout << static_cast<int>('A') << endl;
	//65:'A', 66:'B', 67:'C' //-> Ascii 코드 -> char(1BYTE ????)

}

void StaticCastDemo::Execute()
{
	
	Initialize();
	Print();
}