#include "../stdafx.h"
#include "ByteSizeDemo.h"

//정수
int decimal1;
short decimal2;
long decimal3;
long long decimal4;

//실수
float real1;
double real2;


void ByteSizeDemo::Initialize()
{

}

void ByteSizeDemo::Print()
{
	TEXTCOLOR_GREEN;
	cout << __FILE__ << endl;
	cout << __FUNCTION__ << endl;

	TEXTCOLOR_RED;
	cout << "변수의 주소를 출력해보자" << endl;
	cout << "--------------------------" << endl;
	cout << "decimal1의 주소 : " << &decimal1 << endl;
	cout << "decimal2의 주소 : " << &decimal2 << endl;
	cout << "decimal3의 주소 : " << &decimal3 << endl;
	cout << "decimal4의 주소 : " << &decimal4 << endl;
	cout << "real1의 주소 : " << &real1 << endl;
	cout << "real2의 주소 : " << &real2 << endl;
	cout << endl << endl;

	TEXTCOLOR_BLUE;
	cout << "데이터타입의 바이트 크기를 출력해보자" << endl;
	cout << "--------------------------" << endl;
	cout << "int 타입의 바이트 크기 : " << sizeof(decimal1) << endl;
	cout << "short 타입의 바이트 크기 : " << sizeof(decimal2) << endl;
	cout << "long 타입의 바이트 크기 : " << sizeof(decimal3) << endl;
	cout << "long long 타입의 바이트 크기 : " << sizeof(decimal4) << endl;
	cout << endl << endl;

	TEXTCOLOR_CYAN;
	cout << "왜 여러 타입이 있을까?" << endl;
	cout << "--------------------------" << endl;
	signed short sNumber = 32000;
	cout << "sNumber에 들어 있는 값 : " << sNumber << endl;
	sNumber = 32768;
	cout << "sNumber에 들어 있는 값 : " << sNumber << endl;
	cout << endl << endl;

	TEXTCOLOR_YELLOW;
	cout << "unsigned란 무엇인가?" << endl;
	cout << "--------------------------" << endl;
	unsigned short uNumber = 32768;
	cout << "unsinged short에 들어 있는 값 : " << uNumber << endl;
	uNumber = 65536;
	cout << "unsinged short에 들어 있는 값 : " << uNumber << endl;
	uNumber = -2;
	cout << "unsinged short에 들어 있는 값 : " << uNumber << endl;
	cout << endl << endl;

}

void ByteSizeDemo::Execute()
{
	Initialize();
	Print();
}