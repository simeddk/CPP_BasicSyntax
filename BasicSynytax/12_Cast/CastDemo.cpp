#include "../stdafx.h"
#include "CastDemo.h"
#include "GameObject.h"
#include "Character.h"
#include "Animal.h"
#include "Architecture.h"

void CastDemo::Execute()
{
	//업캐스팅
	GameObject* building = new Architecture("빌딩", 3, 3);
	GameObject* home = new Architecture("집", 15, 15);
	GameObject* butcher = new Architecture("정육점", 40, 15);

	GameObject* man = new Character("사람", 7, 7);
	GameObject* dog = new Animal("개", 3, 7);

	GameObject* objects[5] = { building, home, butcher, man, dog };

#pragma region DownCast
	/*cout << "1.빌딩 2.집 3.정육점 4.사람 5.개" << endl;
	int input;
	
	cout << "누구를 동물로 캐스팅해볼까 : ";
	cin >> input;

	Animal* animal = dynamic_cast<Animal*>(objects[input - 1]);
	if (animal == nullptr)
		cout << objects[input - 1]->Symbol() << "은 동물이 아닙니다" << endl;
	else
		cout << objects[input - 1]->Symbol() << "은 동물입니다" << endl;*/
#pragma endregion

	while (true)
	{
		if (_kbhit())
		{
			system("cls");

			for (int i = 0; i < 3; i++)
				CheckCollision((Architecture*)objects[i], objects);

			Animal* animal = dynamic_cast<Animal*>(objects[4]);
			if (animal != nullptr)
			{
				if (GetAsyncKeyState('Q'))
					animal->SetFollower(man);

				if (GetAsyncKeyState('E'))
					animal->SetFollower(nullptr);
			}

			for (int i = 0; i < 5; i++)
				objects[i]->Update();

			for (int i = 0; i < 5; i++)
				objects[i]->Render();


			if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
				break;

			while (_kbhit())
				int a = _getch();
		}
	}

	for (int i = 0; i < 5; i++)
		delete objects[i];
	
}

void CheckCollision(Architecture * specific, GameObject ** objects)
{
	Character* character = nullptr;

	for (int i = 0; i < 5; i++)
	{
		character = dynamic_cast<Character*>(objects[i]);

		if (character != nullptr)
			break;
	}

	if (specific->Position().X == character->Position().X &&
		specific->Position().Y == character->Position().Y)
		specific->SetVisit(true);
}
