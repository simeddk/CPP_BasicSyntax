#include "../stdafx.h"
#include "IfDemo.h"

#define NoUse
#define Laugh cout << "HAHA" << ", HOHO" << ", KKKK" << endl
#define Four 2 + 2

void IfDemo::Initialize()
{
	
}

void IfDemo::Print()
{
	PrintFile;

#ifndef NoUse
	cout << "if 분기(Branch) 사용해보기" << endl;
	cout << "----------------------------" << endl;

	string comment = "어디로 갈까나?";
	int input;

	cout << comment << endl;
	cout << "1.마을 2.던전 3.나가기 : ";
	cin >> input;

	if (input == 1)
	{
		TEXTCOLOR_GREEN;
		cout << "마을에 당도했다" << endl << endl;

		cout << comment << endl;
		cout << "1.술집 2.상점 3.여관 : ";

		TEXTCOLOR_WHITE;
		cin >> input;

		TEXTCOLOR_GREEN;
		if (input == 1)
			cout << "술집에 왔다." << endl;
		else if (input == 2)
			cout << "상점에 왔다." << endl;
		else if (input == 3)
			cout << "여관에 왔다." << endl;
		else
			cout << "잘못된 선택" << endl;
	}
	else if (input == 2)
	{
		TEXTCOLOR_RED;
		cout << "던전에 입장했다" << endl << endl;

		cout << "Lv.9999 몬스터가 보인다" << endl;
		cout << "1.싸운다 2.도망간다 : ";

		TEXTCOLOR_WHITE;
		cin >> input;

		TEXTCOLOR_RED;
		if (input == 1)
			cout << "즉사했다. 게임오버" << endl;
		else
			cout << "몬스터가 더 빨랐다. 게임오버" << endl;
	}
	else
	{
		cout << "안녕~~~~" << endl;
		return;
	}
	cout << endl << endl;
#endif

	TEXTCOLOR_WHITE;
	cout << "범위에 주의!!" << endl;
	cout << "------------" << endl;

	short score = 75;

	if (score >= 75)
		cout << "실버" << endl;
	else if (score >= 50)
		cout << "브론즈" << endl;

	cout << endl << endl;


	cout << "합성 조건식도 사용 가능" << endl;
	cout << "-----------------------" << endl;

	int score1, score2, score3;
	cout << "점수 세개 입력 : ";
	cin >> score1 >> score2 >> score3;
	
	if (score1 >= 60 && score2 >= 60 && score3 >= 60)
		cout << "합격" << endl;
	else
	{
		if (score1 >= 100 || score2 >= 100 || score3 >= 100)
			cout << "합격" << endl;
		else
			cout << "불합격" << endl;
	}
}

void IfDemo::Execute()
{
	Initialize();
	Print();
}

