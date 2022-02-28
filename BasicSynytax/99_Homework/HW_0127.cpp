#include "../stdafx.h"
#include "HW_0127.h"

int bingoTable[5][5];

void HW_0127::Initialize()
{
	//������ �ʱ�ȭ
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			bingoTable[i][j] = (5 * i + 1) + j;
		}
	}

	//����
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
	//���� �÷���
	int bingoCount = 0;
	int maskCount = 0;
	int input;

	while (true)
	{
		system("cls");

		TEXTCOLOR_CYAN;
		cout << "���� : " << bingoCount << "������" << endl;
		cout << "--------------------------------" << endl;
		TEXTCOLOR_WHITE;

		//���̺� ���
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

		//���� ����
		if (bingoCount >= 3)
		{
			cout << "3����ٿ�" << endl;
			break;
		}

		//�Է�
		cout << "����� ������ ? ";
		cin >> input;

		//���õ� ���� ����ŷ
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

		//���� �˻�
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

		//���� �˻�
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

		//�밢�� �˻�(Inverse)
		maskCount = 0;
		for (int i = 0; i < 5; i++)
		{
			if (bingoTable[i][i] == -1)
				maskCount++;
		}
		if (maskCount >= 5)
			bingoCount++;

		//�밢�� �˻�(Linear)
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

