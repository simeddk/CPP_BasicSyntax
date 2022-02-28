#include "../stdafx.h"
#include "ByteSizeDemo.h"

//����
int decimal1;
short decimal2;
long decimal3;
long long decimal4;

//�Ǽ�
float real1;
double real2;


void ByteSizeDemo::Initialize()
{

}

void ByteSizeDemo::Print()
{
	TEXTCOLOR_GREEN;
	cout << __FILE__ << endl;
	cout << __FUNCTION__ << endl;

	TEXTCOLOR_RED;
	cout << "������ �ּҸ� ����غ���" << endl;
	cout << "--------------------------" << endl;
	cout << "decimal1�� �ּ� : " << &decimal1 << endl;
	cout << "decimal2�� �ּ� : " << &decimal2 << endl;
	cout << "decimal3�� �ּ� : " << &decimal3 << endl;
	cout << "decimal4�� �ּ� : " << &decimal4 << endl;
	cout << "real1�� �ּ� : " << &real1 << endl;
	cout << "real2�� �ּ� : " << &real2 << endl;
	cout << endl << endl;

	TEXTCOLOR_BLUE;
	cout << "������Ÿ���� ����Ʈ ũ�⸦ ����غ���" << endl;
	cout << "--------------------------" << endl;
	cout << "int Ÿ���� ����Ʈ ũ�� : " << sizeof(decimal1) << endl;
	cout << "short Ÿ���� ����Ʈ ũ�� : " << sizeof(decimal2) << endl;
	cout << "long Ÿ���� ����Ʈ ũ�� : " << sizeof(decimal3) << endl;
	cout << "long long Ÿ���� ����Ʈ ũ�� : " << sizeof(decimal4) << endl;
	cout << endl << endl;

	TEXTCOLOR_CYAN;
	cout << "�� ���� Ÿ���� ������?" << endl;
	cout << "--------------------------" << endl;
	signed short sNumber = 32000;
	cout << "sNumber�� ��� �ִ� �� : " << sNumber << endl;
	sNumber = 32768;
	cout << "sNumber�� ��� �ִ� �� : " << sNumber << endl;
	cout << endl << endl;

	TEXTCOLOR_YELLOW;
	cout << "unsigned�� �����ΰ�?" << endl;
	cout << "--------------------------" << endl;
	unsigned short uNumber = 32768;
	cout << "unsinged short�� ��� �ִ� �� : " << uNumber << endl;
	uNumber = 65536;
	cout << "unsinged short�� ��� �ִ� �� : " << uNumber << endl;
	uNumber = -2;
	cout << "unsinged short�� ��� �ִ� �� : " << uNumber << endl;
	cout << endl << endl;

}

void ByteSizeDemo::Execute()
{
	Initialize();
	Print();
}