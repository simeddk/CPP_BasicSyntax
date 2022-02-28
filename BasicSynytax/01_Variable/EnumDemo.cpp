#include "../stdafx.h"
#include "EnumDemo.h"

enum EBehaviorType
{
	Idle, Dead, Run, Attack, Hit, Walk,
};

//�̳���(������)���� ����
EBehaviorType enumType;

enum class EAnimationType
{
	Play, Stop, Pause, Resume
};

enum class ESoundType
{
	Play, Stop, Pause, Resume
};

EAnimationType animType;
ESoundType soundType;

void EnumDemo::Initialize()
{
	enumType = Walk;
	animType = EAnimationType::Play;
	soundType = ESoundType::Play;
}

void EnumDemo::Print()
{
	TEXTCOLOR_GREEN;
	cout << __FILE__ << endl;
	cout << __FUNCTION__ << endl;

	TEXTCOLOR_RED;
	cout << "�������� ���� �˾ƺ���" << endl;
	cout << "Behavior : " << enumType << endl;
	cout << "AnimType : " << (int)animType << endl;
	cout << "SoundType : " << (int)soundType << endl;
	cout << endl << endl;

}

void EnumDemo::Execute()
{
	Initialize();
	Print();
}