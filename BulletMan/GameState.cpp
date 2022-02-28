#include "stdafx.h"
#include "GameState.h"
#include "Player.h"
#include "Enemy.h"

GameState::GameState(Player * player, Enemy * enemy)
	: player(player)
	, enemy(enemy)
{
}

void GameState::Update()
{
	int reply = 0;

	if (enemy->GetHP() <= 0)
		reply = MessageBoxA(nullptr, "플레이어 승리", "적뒈짐", MB_OK);

	if (player->GetHP() <= 0)
		reply = MessageBoxA(nullptr, "께임오바", "나뒈짐", MB_OK);

	if (reply == IDOK)
		bContinue = false;
}

void GameState::Render()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });

	cout << "플레이어 위치 : " << player->GetPosition().X << ", " << player->GetPosition().Y << "\t";
	cout << "적 위치 : " << enemy->GetPosition().X << ", " << enemy->GetPosition().Y << endl;

	cout << "플레이어 체력 : " << player->GetHP() << "\t";
	cout << "적 체력 : " << enemy->GetHP() << endl;


	EStateType state = enemy->GetState();
	string str;

	switch (state)
	{
		case EStateType::Idle:		str = "Idle";		break;
		case EStateType::Approach:	str = "Approach";	break;
		case EStateType::Attack:	str = "Attack";		break;
	}

	cout << "적상태 : " << str;
}
