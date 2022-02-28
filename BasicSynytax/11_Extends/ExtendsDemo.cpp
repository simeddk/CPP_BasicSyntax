#include "../stdafx.h"
#include "ExtendsDemo.h"
#include "Actor.h"
#include "Pawn.h"
#include <conio.h>

void ExtendsDemo::Execute()
{
	Actor* actor = new Actor("A", 5, 5);
	Pawn* pawn = new Pawn("P", 7, 7);

	while (true)
	{
		if (_kbhit())
		{
			system("cls");

			actor->Update();
			pawn->Update();

			actor->Render();

			pawn->SetColorToRed();
			pawn->Render();
			pawn->SetColorToDefault();

			if (GetAsyncKeyState(VK_ESCAPE))
				break;

			while (_kbhit())
				int a = _getch();
		}
	}

	delete pawn;
	delete actor;

}

 