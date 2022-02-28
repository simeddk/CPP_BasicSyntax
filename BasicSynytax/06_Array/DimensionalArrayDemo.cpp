#include "../stdafx.h"
#include "DimensionalArrayDemo.h"

#define D2Array
#define BraceInitialize

enum class EWeaponType { Melee, Wizard, Max};
enum class ESkillType { Skill1, Skill2, Skill3, Skill4, Max};

void DimensionalArrayDemo::Initialize()
{
}

void DimensionalArrayDemo::Print()
{
#ifndef D2Array
	cout << "2���� �迭�� �ʱ�ȭ�غ���" << endl;
	cout << "-----------------------" << endl;
	int arr[3][5];
	arr[0][0] = 10;
	arr[0][1] = 20;
	arr[0][2] = 30;
	arr[0][3] = 40;
	arr[0][4] = 50;

	arr[1][0] = 100;
	arr[1][1] = 200;
	arr[1][2] = 300;
	arr[1][3] = 400;
	arr[1][4] = 500;

	arr[2][0] = 901;
	arr[2][1] = 902;
	arr[2][2] = 903;
	arr[2][3] = 904;
	arr[2][4] = 905;

	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 5; i++)
		{
			printf("[%d][%d] = %d\t", i, i, arr[i][i]);
			//cout << "[" << i << "][" << i << "] = " << arr[i][i] << "\t";
		}
		cout << endl;
	}
#endif

#ifndef BraceInitialize
	cout << "�߰�ȣ(Brace) �ʱ�ȭ" << endl;
	int arr[2][3] = { {100, 200, 300}, {400, 500, 600 }};

	for (int i = 0; i < 2; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			printf("[%d][%d] = %d\t", i, i, arr[i][i]);
		}
		cout << endl;
	}
#endif


	cout << "�̰��� ���̺�" << endl;
	cout << "-----------------" << endl;

	string skills[(int)EWeaponType::Max][(int)ESkillType::Max]; // string skills[2][4];
	skills[(int)EWeaponType::Melee][(int)ESkillType::Skill1] = "���";
	skills[(int)EWeaponType::Melee][(int)ESkillType::Skill2] = "������ �ι� ���";
	skills[(int)EWeaponType::Melee][(int)ESkillType::Skill3] = "�Ʊ� ��� �� ���";
	skills[(int)EWeaponType::Melee][(int)ESkillType::Skill4] = "�����ϰ� ���";

	skills[(int)EWeaponType::Wizard][(int)ESkillType::Skill1] = "���̾";
	skills[(int)EWeaponType::Wizard][(int)ESkillType::Skill2] = "���̾�����";
	skills[(int)EWeaponType::Wizard][(int)ESkillType::Skill3] = "���̾��";
	skills[(int)EWeaponType::Wizard][(int)ESkillType::Skill4] = "���̾���";

	cout << "ȭ�鿡 (1)��������, (2)��������" << endl;
	cout << "� ���⸦ �޾ ��ų�� �����غ��� : ";
	int input;
	cin >> input;

	
	for (int i = 0; i < (int)ESkillType::Max; i++) 
			cout << skills[input - 1][i] << endl;
}

void DimensionalArrayDemo::Execute()
{
	Initialize();
	Print();
}
