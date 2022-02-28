#include "../stdafx.h"
#include "BitDemo.h"

int bin1;
int bin2;

void BitDemo::Initialize()
{
	bin1 = 3; //0011
	bin2 = 10; //1010
}

void BitDemo::Print()
{
	//dec : 10, oct : 8, hex : 16, bin

	PrintFile;
	TEXTCOLOR_RED;
	cout << "16진수를 출력해보기" << endl;
	cout << "------------------" << endl;
	cout << "3(dec->hex) : " <<  hex << bin1 << endl;
	cout << "10(dec->hex) : " <<  hex << bin2 << endl;
	cout << endl << endl;

	TEXTCOLOR_GREEN;
	cout << "비트 연산 해보기" << endl;
	cout << "------------------" << endl;
	cout << "bin1 | bin2 : " << (bin1 | bin2) << endl; //OR
	cout << "bin1 & bin2 : " << (bin1 & bin2) << endl; //AND
	cout << "~bin1 : " << ~bin1 << endl; //반전
	cout << endl << endl;

	TEXTCOLOR_BLUE;
	cout << "시프트 연산 해보기" << endl;
	cout << "------------------" << endl;
	cout << "bin1 << 1 : " << dec << (bin1 << 1) << endl; //6
	cout << "bin1 << 2 : " << dec << (bin1 << 2) << endl; //12
	cout << "bin2 >> 1 : " << dec << (bin2 >> 1) << endl; //5
	cout << endl << endl;
}

void BitDemo::Execute()
{
	Initialize();
	Print();
}