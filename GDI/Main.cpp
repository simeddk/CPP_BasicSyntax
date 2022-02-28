#include "stdafx.h"
#include "Objects/GameObject.h"
#include "Objects/Player.h"
#include "Objects/Background.h"
#include "Objects/Npc.h"
#include "Objects/Monster.h"

int main()
{
	Device::Create();
	Renderer::Create();
	
	Object* player = new Player(L"../_Images/Player.png");
	player->SetPosition(Vector2(500, 400));

	Object* background = new Background(L"../_Images/Background.jpg");

	Object* npc = new Npc(L"../_Images/Npc.png");
	npc ->SetPosition(Vector2(650, 125))->SetMoveSpeed(0.f);
	dynamic_cast<Npc*>(npc)->SetLookAtTarget(player);

	Object* monster = new Monster(L"../_Images/Monster.png", Vector2(150.0f, 250.0f), 1.0f);
	dynamic_cast<Monster*>(monster)->SetTraceTarget(player);

	while (true)
	{
		background->Update();
		player->Update();
		npc->Update();
		monster->Update();

		Renderer::Get()->PreRender();
		{
			background->Render();
			player->Render();
			npc->Render();
			monster->Render();
		}
		Renderer::Get()->PostRender();

		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
			break;
	}

	SAFE_DELETE(monster);
	SAFE_DELETE(npc);
	SAFE_DELETE(background);
	SAFE_DELETE(player);

	Renderer::Delete();
	Device::Delete();

	return 0;
}