#include "../stdafx.h"
#include "VariableDemo.h"

// # 변수의 선언
//정수
int nNumber; 
short sNumber;
long lNumber;
long long llNumber;
char cNumber;

//실수
float fNumber;
double dNumber;

//그외
bool bFlag; //0:false, 1:true
string str; //문자열 = "HAHA", "Hello"

void Initialize()
{
	//초기화(Initialize)
	nNumber = 15;
	sNumber = 25;
	lNumber = 35L;
	llNumber = 45LL;
	cNumber = 65;

	fNumber = 3.14f;
	dNumber = 3.14;

	bFlag = false;
	str = "Hello~";
}

void Print()
{
	TEXTCOLOR_CYAN;
	cout << "정수를 출력해보자" << endl;
	cout << "------------------" << endl;
	cout << "nNumber : " << nNumber << endl;
	cout << "sNumber : " << sNumber << endl;
	cout << "lNumber : " << lNumber << endl;
	cout << "llNumber : " << llNumber << endl;
	cout << "cNumber : " << cNumber << endl;
	cout << endl << endl;

	TEXTCOLOR_MAGENTA;
	cout << "실수를 출력해보자" << endl;
	cout << "------------------" << endl;
	cout << "fNumber : " << fNumber << endl;
	cout << "dNumber : " << dNumber << endl;
	cout << endl << endl;

	TEXTCOLOR_YELLOW;
	cout << "그 외를 출력해보자" << endl;
	cout << "------------------" << endl;
	cout << "bFlag : " << bFlag << endl;
	cout << "str : " << str.c_str() << endl;
	cout << endl << endl;
}

void Execute()
{
	Initialize();
	Print();
}

//변수의 명명 규칙
// -> 띄워쓰기 불가
// -> 예약된 키워드 사용 불가
// -> 대소문자를 구별함
// -> 특수문자 불가(언더바는 제외)
// -> 변수의 시작은 숫자 불가
