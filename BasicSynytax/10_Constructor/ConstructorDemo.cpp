#include "../stdafx.h"
#include "ConstructorDemo.h"
#include "Weapon.h"


void ConstructorDemo::Execute()
{
	cout << "생성자를 사용해보자" << endl;
	cout << "------------------" << endl;
	Weapon sword;
	sword.SetName("칼");
	sword.ShowStatus();
	cout << endl;

	Weapon bow("활", 10, 5);
	bow.SetComboPower(4, 1000);
	bow.ShowStatus();
	cout << endl << endl;
}

 