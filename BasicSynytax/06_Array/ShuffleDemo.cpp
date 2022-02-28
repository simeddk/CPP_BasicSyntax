#include "../stdafx.h"
#include "ShuffleDemo.h"

#define Random

void ShuffleDemo::Initialize()
{
	srand(static_cast<UINT>(GetTickCount()));
}

void ShuffleDemo::Print()
{
#ifndef Random
	cout << "�����̶�" << endl;
	cout << "------------" << endl;
	while(true)
	{ 
		cout << rand() % 10 << endl;
		Sleep(200);
	}
#endif

	cout << "�����̶�" << endl;
	cout << "------------" << endl;
	string str[4] = { "��", "��", "��", "��" };

	while (true)
	{
		//����
		for (UINT i = 0; i < 100; i++)
		{
			int src = rand() % 4;
			int dst = rand() % 4;

			string temp = str[src];
			str[src] = str[dst];
			str[dst] = temp;
		}

		Sleep(750);

		//���
		for (UINT i = 0; i < 4; i++)
		{
			if (str[i] == "��")
			{
				TEXTCOLOR_YELLOW;
			}
			else if (str[i] == "��")
			{
				TEXTCOLOR_GREEN;
			}
			else if (str[i] == "��")
			{
				TEXTCOLOR_CYAN;
			}
			else if (str[i] == "��")
			{
				TEXTCOLOR_RED;
			}
			else
			{
				TEXTCOLOR_WHITE;
			}

			cout << str[i] << "\t";
		}
		cout << endl;
	}

}

void ShuffleDemo::Execute()
{
	Initialize();
	Print();
}
