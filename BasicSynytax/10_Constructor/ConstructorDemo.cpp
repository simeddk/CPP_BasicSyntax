#include "../stdafx.h"
#include "ConstructorDemo.h"
#include "Weapon.h"


void ConstructorDemo::Execute()
{
	cout << "�����ڸ� ����غ���" << endl;
	cout << "------------------" << endl;
	Weapon sword;
	sword.SetName("Į");
	sword.ShowStatus();
	cout << endl;

	Weapon bow("Ȱ", 10, 5);
	bow.SetComboPower(4, 1000);
	bow.ShowStatus();
	cout << endl << endl;
}

 