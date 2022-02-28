#include "../stdafx.h"
#include "StructDemo.h"

struct Item
{
	//��� ����
	string name;
	float positionX;
	float positionY;
	float spawnRate;
};

Item normalItem; //<- ���� ����
Item rareItem;

void StructDemo::Initialize()
{
	//��� ���� ���� �ʱ�ȭ
	normalItem.name = "���� ������";
	normalItem.positionX = 10.0f;
	normalItem.positionY = 20.0f;
	normalItem.spawnRate = 20.0f;

	//�߰�ȣ �ʱ�ȭ (<= C++11)
	rareItem = { "���� ������", 100.0f, 200.0f, 1.0f };
}

void StructDemo::Print()
{
	PrintFile;
	cout << "����ü�� ����غ���" << endl;
	cout << "-------------------" << endl;
	cout << "�̸� : " << normalItem.name.c_str() << endl;
	cout << "��ġ : " << normalItem.positionX 
		 << ", " << normalItem.positionY << endl;
	cout << "Ȯ�� : " << normalItem.spawnRate << endl;
	cout << endl << endl;

	cout << "�̸� : " << rareItem.name.c_str() << endl;
	cout << "��ġ : " << rareItem.positionX
		     << ", " <<  rareItem.positionY << endl;
	cout << "Ȯ�� : " << rareItem.spawnRate << endl;
	cout << endl << endl;
}

void StructDemo::Execute()
{
	Initialize();
	Print();
}