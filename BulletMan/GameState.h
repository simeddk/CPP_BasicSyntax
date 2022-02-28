#pragma once
class GameState
{
public:
	GameState(class Player* player, class Enemy* enemy);

	void Update();
	void Render();

	bool IsContinue() { return bContinue; }

private:
	class Player* player = nullptr;
	class Enemy* enemy = nullptr;

	bool bContinue = true;
};

