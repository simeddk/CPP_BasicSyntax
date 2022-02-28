#include "../stdafx.h"
#include "ForDemo.h"

#define ForDefault
#define AnotherIterator
#define DoubleFor

void ForDemo::Initialize()
{
	
}

void ForDemo::Print()
{
	PrintFile;
	
#if not defined ForDefault
	int count;
	cout << "반복회수 : ";
	cin >> count;

	int sum = 0;
	for (int i = 1; i <= count; i++)
	{
		sum = sum + i; //sum += i;
		cout << i << "번째 반복 중, 누적 합계는" << sum << endl;
	}

	cout << endl << endl;
#endif

#ifndef AnotherIterator
	int count = 0;
	for (int i = 0; i < 30; i += 5, count++)
		cout << i << "(" << count << ")" << endl;
#endif


#ifndef DoubleFor
	cout << "2중 for 사용해보기" << endl;
	cout << "-----------------" << endl;

	for (int i = 0; i < 3; i++)
	{
		TEXTCOLOR_CYAN;
		cout << "i=" << i << "번째 반복문 실행 중" << endl;

		for (int j = 0; j < 5; j++)
		{
			TEXTCOLOR_YELLOW;
			//cout << "(i=" << i << ")(j=" << j << ")\t";
			printf("(i=%d)(j=%d)\t", i, j);
		}

		cout << "\n\n";
	}
#endif

#ifndef BreakAndContinue
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			continue;

		if (i >= 10)
			break;

		cout << i << endl;
	}
#endif
}

void ForDemo::Execute()
{
	Initialize();
	Print();
}

