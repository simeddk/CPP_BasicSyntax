#include "stdafx.h"
#include "Player.h"
#include "Enemy.h"
#include "GameState.h"

int main()
{
	
	Player* player = new Player(20, 20);
	Enemy* enemy = new Enemy(10, 10);
	GameState* gameState = new GameState(player, enemy);

	player->SetTarget(enemy);
	enemy->SetTarget(player);

	while (gameState->IsContinue())
	{
		//Update
		{
			player->Update();
			enemy->Update();
			gameState->Update();
		}

		//Render
		Sleep(20);
		system("cls");
		{
			player->Render();
			enemy->Render();
			gameState->Render();
		}


		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
			break;
	}

	delete player;
	delete enemy;
	delete gameState;

	return 0;
}