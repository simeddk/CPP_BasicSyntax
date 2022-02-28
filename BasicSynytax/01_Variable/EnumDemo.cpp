#include "../stdafx.h"
#include "EnumDemo.h"

enum EBehaviorType
{
	Idle, Dead, Run, Attack, Hit, Walk,
};

//이넘형(열거형)변수 선언
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
	cout << "열거형에 대해 알아보자" << endl;
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