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
		reply = MessageBoxA(nullptr, "�÷��̾� �¸�", "������", MB_OK);

	if (player->GetHP() <= 0)
		reply = MessageBoxA(nullptr, "���ӿ���", "������", MB_OK);

	if (reply == IDOK)
		bContinue = false;
}

void GameState::Render()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });

	cout << "�÷��̾� ��ġ : " << player->GetPosition().X << ", " << player->GetPosition().Y << "\t";
	cout << "�� ��ġ : " << enemy->GetPosition().X << ", " << enemy->GetPosition().Y << endl;

	cout << "�÷��̾� ü�� : " << player->GetHP() << "\t";
	cout << "�� ü�� : " << enemy->GetHP() << endl;


	EStateType state = enemy->GetState();
	string str;

	switch (state)
	{
		case EStateType::Idle:		str = "Idle";		break;
		case EStateType::Approach:	str = "Approach";	break;
		case EStateType::Attack:	str = "Attack";		break;
	}

	cout << "������ : " << str;
}
