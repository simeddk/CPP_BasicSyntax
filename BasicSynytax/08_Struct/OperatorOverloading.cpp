#include "../stdafx.h"
#include "OperatorOverloading.h"

Color3 color3 = { 255, 0, 0 };
Color4 color4 = { 0, 0, 255, 255 };

void OperatorOverloading::Initialize()
{
	
}

void OperatorOverloading::Print()
{
	cout << "�̷��͵� ������ �����Ѱ�?" << endl;
	cout << "------------------------" << endl;
	string str1 = "������ ";
	string str2 = "������ ����";
	string str3 = str1 + str2;
	cout << str3 << endl;

	cout << "������ �����ε� �����" << endl;
	cout << "------------------------" << endl;
	color4 = color3 + color4;
	color4.Colors();
	cout << endl << endl;

	color4 /= 255.0f;
	color4.Colors();

	Color3 c1 = { 200, 100, 100 };
	Color3 c2 = { 150, 200, 200 };

	//�����ε� �Ұ� ������
	//sizeof, ::, ?:, ,(�޺�), .(��), *(������)
	//���� C���� �����ϴ� �����ڸ� �����ε� ($, @)
	//�������� �켱���� ���� �Ұ�
	//[]<----
	//new<----
	// =<----
	//Khan Academy -> ���������, �ﰢ�Լ�
}

void OperatorOverloading::Execute()
{
	Initialize();
	Print();
}

 