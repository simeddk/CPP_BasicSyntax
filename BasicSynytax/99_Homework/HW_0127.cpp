#include "../stdafx.h"
#include "HW_0127.h"

int bingoTable[5][5];

void HW_0127::Initialize()
{
	//빙고판 초기화
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			bingoTable[i][j] = (5 * i + 1) + j;
		}
	}

	//셔플
	srand((UINT)GetTickCount64());
	for (int i = 0; i < 100; i++)
	{
		int r1 = rand() % 5;
		int r2 = rand() % 5;
		int r3 = rand() % 5;
		int r4 = rand() % 5;

		int temp = bingoTable[r1][r2];
		bingoTable[r1][r2] = bingoTable[r3][r4];
		bingoTable[r3][r4] = temp;
	}


	

	
}

void HW_0127::Print()
{
	//게임 플레이
	int bingoCount = 0;
	int maskCount = 0;
	int input;

	while (true)
	{
		system("cls");

		TEXTCOLOR_CYAN;
		cout << "현재 : " << bingoCount << "빙고임" << endl;
		cout << "--------------------------------" << endl;
		TEXTCOLOR_WHITE;

		//테이블 출력
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (bingoTable[i][j] == -1)
				{
					TEXTCOLOR_RED;
					cout << "X" << "\t";
					TEXTCOLOR_WHITE;
				}
				else
					cout << bingoTable[i][j] << "\t";
			}

			cout << endl << endl;
		}

		//게임 종료
		if (bingoCount >= 3)
		{
			cout << "3빙고다욧" << endl;
			break;
		}

		//입력
		cout << "당신의 선택은 ? ";
		cin >> input;

		//선택된 수를 마스킹
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (bingoTable[i][j] == input)
				{
					bingoTable[i][j] = -1;
					break;
				}
			}
		}

		bingoCount = 0;

		//가로 검사
		for (int i = 0; i < 5; i++)
		{
			maskCount = 0;

			for (int j = 0; j < 5; j++)
			{
				if (bingoTable[i][j] == -1)
					maskCount++;
			}

			if (maskCount >= 5)
				bingoCount++;
		}

		//세로 검사
		for (int i = 0; i < 5; i++)
		{
			maskCount = 0;

			for (int j = 0; j < 5; j++)
			{
				if (bingoTable[j][i] == -1)
					maskCount++;
			}

			if (maskCount >= 5)
				bingoCount++;
		}

		//대각선 검사(Inverse)
		maskCount = 0;
		for (int i = 0; i < 5; i++)
		{
			if (bingoTable[i][i] == -1)
				maskCount++;
		}
		if (maskCount >= 5)
			bingoCount++;

		//대각선 검사(Linear)
		maskCount = 0;
		for (int i = 0; i < 5; i++)
		{
			if (bingoTable[i][4 - i] == -1)
				maskCount++;
		}
		if (maskCount >= 5)
			bingoCount++;

		

	}//while(true)

	
}

void HW_0127::Execute()
{
	Initialize();
	Print();
}

