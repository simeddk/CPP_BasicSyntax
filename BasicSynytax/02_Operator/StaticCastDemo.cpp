#include "../stdafx.h"
#include "StaticCastDemo.h"


void StaticCastDemo::Initialize()
{
	
}

void StaticCastDemo::Print()
{
	PrintFile;
	cout << "ĳ���� ����غ���" << endl;
	cout << "----------------" << endl;

	int a = 10;
	int b = 9;

	int c = a / b; // 10 / 9
	cout << "int���� ���� -> int�� ���� : " << c << endl;

	double d = 9;
	d = a / d; // 10 /9
	cout << "int/double ���� -> double�� ����(�Ͻ��� ĳ����): " << d << endl;

	float e = (float)a / (float)b; //C��� ��Ÿ��
	cout << "int/int ���� -> float�� ����(����� ĳ����) : " << e << endl;

	cout << static_cast<int>(3.141592f) << endl;
	cout << static_cast<char>(67) << endl;
	cout << static_cast<int>('A') << endl;
	//65:'A', 66:'B', 67:'C' //-> Ascii �ڵ� -> char(1BYTE ????)

}

void StaticCastDemo::Execute()
{
	
	Initialize();
	Print();
}