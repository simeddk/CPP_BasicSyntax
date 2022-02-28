#include "../stdafx.h"
#include "SortDemo.h"


void SortDemo::Initialize()
{
	
}

void SortDemo::Print()
{
	USHORT arr[5] = { 5, 3, 2, 4, 1 };
	UINT count = ARRAYSIZE(arr);
	PrintArray(arr, count, "정렬 전");

	BubbleSort(arr, count);
	PrintArray(arr, count, "거품정렬 후");

	arr[0] = 5;
	arr[1] = 3;
	arr[2] = 1;
	arr[3] = 2;
	arr[4] = 4;
	SelectionSort(arr, count);
	PrintArray(arr, count, "선택정렬 후");
}

void SortDemo::Execute()
{
	Initialize();
	Print();
}

void PrintArray(USHORT arr[], UINT size, string name)
{
	cout << name << " : ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];

		if (i == size - 1)
			continue;

		cout << ", ";
	}
	cout << endl;
}

void BubbleSort(USHORT arr[], UINT size)
{
	for (UINT i = 0; i < size; i++)
	{
		for (UINT j = 0; j < size - 1; j++) //j max : 3
		{
			if (arr[j] > arr[j + 1])
			{
				USHORT temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void SelectionSort(USHORT arr[], UINT size)
{
	for (UINT i = 0; i < size; i++)
	{
		for (UINT j = i; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				USHORT temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}