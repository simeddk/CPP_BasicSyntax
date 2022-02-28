#include "../stdafx.h"
#include "StructDemo.h"

struct Item
{
	//멤버 변수
	string name;
	float positionX;
	float positionY;
	float spawnRate;
};

Item normalItem; //<- 변수 선언
Item rareItem;

void StructDemo::Initialize()
{
	//멤버 변수 각개 초기화
	normalItem.name = "보통 아이템";
	normalItem.positionX = 10.0f;
	normalItem.positionY = 20.0f;
	normalItem.spawnRate = 20.0f;

	//중괄호 초기화 (<= C++11)
	rareItem = { "레어 아이템", 100.0f, 200.0f, 1.0f };
}

void StructDemo::Print()
{
	PrintFile;
	cout << "구조체를 사용해보자" << endl;
	cout << "-------------------" << endl;
	cout << "이름 : " << normalItem.name.c_str() << endl;
	cout << "위치 : " << normalItem.positionX 
		 << ", " << normalItem.positionY << endl;
	cout << "확률 : " << normalItem.spawnRate << endl;
	cout << endl << endl;

	cout << "이름 : " << rareItem.name.c_str() << endl;
	cout << "위치 : " << rareItem.positionX
		     << ", " <<  rareItem.positionY << endl;
	cout << "확률 : " << rareItem.spawnRate << endl;
	cout << endl << endl;
}

void StructDemo::Execute()
{
	Initialize();
	Print();
}