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
	cout << "if �б�(Branch) ����غ���" << endl;
	cout << "----------------------------" << endl;

	string comment = "���� ���?";
	int input;

	cout << comment << endl;
	cout << "1.���� 2.���� 3.������ : ";
	cin >> input;

	if (input == 1)
	{
		TEXTCOLOR_GREEN;
		cout << "������ �絵�ߴ�" << endl << endl;

		cout << comment << endl;
		cout << "1.���� 2.���� 3.���� : ";

		TEXTCOLOR_WHITE;
		cin >> input;

		TEXTCOLOR_GREEN;
		if (input == 1)
			cout << "������ �Դ�." << endl;
		else if (input == 2)
			cout << "������ �Դ�." << endl;
		else if (input == 3)
			cout << "������ �Դ�." << endl;
		else
			cout << "�߸��� ����" << endl;
	}
	else if (input == 2)
	{
		TEXTCOLOR_RED;
		cout << "������ �����ߴ�" << endl << endl;

		cout << "Lv.9999 ���Ͱ� ���δ�" << endl;
		cout << "1.�ο�� 2.�������� : ";

		TEXTCOLOR_WHITE;
		cin >> input;

		TEXTCOLOR_RED;
		if (input == 1)
			cout << "����ߴ�. ���ӿ���" << endl;
		else
			cout << "���Ͱ� �� ������. ���ӿ���" << endl;
	}
	else
	{
		cout << "�ȳ�~~~~" << endl;
		return;
	}
	cout << endl << endl;
#endif

	TEXTCOLOR_WHITE;
	cout << "������ ����!!" << endl;
	cout << "------------" << endl;

	short score = 75;

	if (score >= 75)
		cout << "�ǹ�" << endl;
	else if (score >= 50)
		cout << "�����" << endl;

	cout << endl << endl;


	cout << "�ռ� ���ǽĵ� ��� ����" << endl;
	cout << "-----------------------" << endl;

	int score1, score2, score3;
	cout << "���� ���� �Է� : ";
	cin >> score1 >> score2 >> score3;
	
	if (score1 >= 60 && score2 >= 60 && score3 >= 60)
		cout << "�հ�" << endl;
	else
	{
		if (score1 >= 100 || score2 >= 100 || score3 >= 100)
			cout << "�հ�" << endl;
		else
			cout << "���հ�" << endl;
	}
}

void IfDemo::Execute()
{
	Initialize();
	Print();
}

