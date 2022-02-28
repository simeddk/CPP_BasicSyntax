#include "stdafx.h"
#include "Objects/GameObject.h"
#include "Objects/Player.h"

int main()
{
	Device::Create();
	Renderer::Create();
	
	Object* player = new Player(L"../_Images/Player.png");
	player->SetPosition(Vector2(500, 400));

	while (true)
	{
		player->Update();

		Renderer::Get()->PreRender();
		{
			player->Render();
		}
		Renderer::Get()->PostRender();

		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
			break;
	}

	SAFE_DELETE(player);

	Renderer::Delete();
	Device::Delete();

	return 0;
}