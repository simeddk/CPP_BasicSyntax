#include "../stdafx.h"
#include "SwapDemo.h"


void SwapDemo::Initialize()
{
	
}

void SwapDemo::Print()
{
	long arr[] = { 3, 4, 6, 2, 1, 5 };

	TEXTCOLOR_CYAN;
	int count = sizeof(arr) / sizeof(arr[0]);
	cout << "배열의 개수는 : " << count <<endl;
	TEXTCOLOR_WHITE;

	while (true)
	{
		for (int e : arr)
			cout << e << ", ";
		cout << endl << endl;

		cout << "누구랑 누구를 바꿀까 : ";
		int input1, input2;
		cin >> input1 >> input2;

		int index1, index2;
		bool bFound1 = false, bFound2 = false;
		for (int i = 0; i < count; i++)
		{
			if (arr[i] == input1)
			{
				index1 = i;
				bFound1 = true;
			}

			if (arr[i] == input2)
			{
				index2 = i;
				bFound2 = true;
			}
		}//for(i)

		bool bFoundBoth = true;
		bFoundBoth &= bFound1;
		bFoundBoth &= bFound2;

		if (bFoundBoth == false)
		{
			TEXTCOLOR_RED;
			cout << "원하는 값을 찾을 수 없었다" << endl;
			TEXTCOLOR_WHITE;
			continue;
		}
		
		long temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
		

	}//while(true)


}

void SwapDemo::Execute()
{
	Initialize();
	Print();
}
