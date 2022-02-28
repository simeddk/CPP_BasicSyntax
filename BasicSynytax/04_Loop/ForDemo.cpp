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
	cout << "�ݺ�ȸ�� : ";
	cin >> count;

	int sum = 0;
	for (int i = 1; i <= count; i++)
	{
		sum = sum + i; //sum += i;
		cout << i << "��° �ݺ� ��, ���� �հ��" << sum << endl;
	}

	cout << endl << endl;
#endif

#ifndef AnotherIterator
	int count = 0;
	for (int i = 0; i < 30; i += 5, count++)
		cout << i << "(" << count << ")" << endl;
#endif


#ifndef DoubleFor
	cout << "2�� for ����غ���" << endl;
	cout << "-----------------" << endl;

	for (int i = 0; i < 3; i++)
	{
		TEXTCOLOR_CYAN;
		cout << "i=" << i << "��° �ݺ��� ���� ��" << endl;

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

