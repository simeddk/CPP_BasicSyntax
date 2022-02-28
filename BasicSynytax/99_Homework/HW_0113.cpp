#include "../stdafx.h"
#include "HW_0113.h"

#define IsOdd
#define Floor
#define Ceil

void HW_0113::Initialize()
{
	
}

void HW_0113::Print()
{
#ifndef IsOdd
	//(1)두 줄 이내로 홀짝 구별 -> 인터넷 검색
	int input;
	cin >> input, (input & 1 == 1) ? cout << "홀\n" : cout << "짝\n";
#endif


#ifndef Floor
	//(2)소수점 버리기
	cout << "Floor" << endl;
	float fNumber;
	cout << "실수 입력 : ";
	cin >> fNumber;
	cout << "floor : " << static_cast<int>(fNumber) << endl;
#endif

#ifndef Ceil
	//(3)소수점 0.1 이상 있으면 정수자리 올림(3.1 -> 4)
	float fNumber;
	cout << "실수 입력 : ";
	cin >> fNumber;
	float temp = fNumber - static_cast<int>(fNumber);

	temp *= 100;
	if (temp >= 10)
		fNumber += 1.0f;

	cout << static_cast<int>(fNumber) << endl;
#endif

}

void HW_0113::Execute()
{
	Initialize();
	Print();
}

