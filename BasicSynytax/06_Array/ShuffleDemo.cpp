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
	cout << "·£´ýÀÌ¶õ" << endl;
	cout << "------------" << endl;
	while(true)
	{ 
		cout << rand() % 10 << endl;
		Sleep(200);
	}
#endif

	cout << "¼ÅÇÃÀÌ¶õ" << endl;
	cout << "------------" << endl;
	string str[4] = { "¡Ú", "¢À", "¢Â", "¢¾" };

	while (true)
	{
		//¼ÅÇÃ
		for (UINT i = 0; i < 100; i++)
		{
			int src = rand() % 4;
			int dst = rand() % 4;

			string temp = str[src];
			str[src] = str[dst];
			str[dst] = temp;
		}

		Sleep(750);

		//Ãâ·Â
		for (UINT i = 0; i < 4; i++)
		{
			if (str[i] == "¡Ú")
			{
				TEXTCOLOR_YELLOW;
			}
			else if (str[i] == "¢À")
			{
				TEXTCOLOR_GREEN;
			}
			else if (str[i] == "¢Â")
			{
				TEXTCOLOR_CYAN;
			}
			else if (str[i] == "¢¾")
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
