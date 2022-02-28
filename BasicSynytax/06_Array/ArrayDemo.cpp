#include "../stdafx.h"
#include "ArrayDemo.h"

void ArrayDemo::Initialize()
{
	
}

void ArrayDemo::Print()
{
	//배열 초기화 방법1
	int nArr[5];
	nArr[0] = 10;
	nArr[1] = 20;
	nArr[2] = 30;
	nArr[3] = 40;
	nArr[4] = 50;
	
	cout << "배열 엘리먼트 접근" << endl;
	cout << "-----------------" << endl;
	cout << nArr[1] << endl;
	cout << endl << endl;

	cout << "배열 전체 출력(증감자i를 사용한 예)" << endl;
	cout << "--------------------------------" << endl;
	for (int i = 0; i < 5; i++)
		cout << nArr[i] << "\t";
	cout << endl << endl;

	cout << "배열 전체 출력(범위기반반복문 사용 예)" << endl;
	cout << "--------------------------------" << endl;
	for (int element : nArr)
		cout << element << "\t";
	cout << endl << endl;

	cout << "배열 내 특정값을 갖는 인덱스 번호 찾기" << endl;
	cout << "--------------------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (nArr[i] == 40)
		{
			cout << "40이 들어 있는 인덱스는 [" << i << "]번째 인덱스임" << endl;
			break;
		}
	}
	cout << endl << endl;

	cout << "배열 내 특정값을 갖는 인덱스 번호 찾기(범위기반 Ver)" << endl;
	cout << "--------------------------------" << endl;
	int count = 0;
	for (int element : nArr)
	{
		if (element == 40)
		{
			cout << "40이 들어 있는 인덱스는 [" << count << "]번째 인덱스임" << endl;
			break;
		}

		count++;
	}
	cout << endl << endl;

}

void ArrayDemo::Execute()
{
	Initialize();
	Print();
}
