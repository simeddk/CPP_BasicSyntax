#include "../stdafx.h"
#include "VariableDemo.h"

// # ������ ����
//����
int nNumber; 
short sNumber;
long lNumber;
long long llNumber;
char cNumber;

//�Ǽ�
float fNumber;
double dNumber;

//�׿�
bool bFlag; //0:false, 1:true
string str; //���ڿ� = "HAHA", "Hello"

void Initialize()
{
	//�ʱ�ȭ(Initialize)
	nNumber = 15;
	sNumber = 25;
	lNumber = 35L;
	llNumber = 45LL;
	cNumber = 65;

	fNumber = 3.14f;
	dNumber = 3.14;

	bFlag = false;
	str = "Hello~";
}

void Print()
{
	TEXTCOLOR_CYAN;
	cout << "������ ����غ���" << endl;
	cout << "------------------" << endl;
	cout << "nNumber : " << nNumber << endl;
	cout << "sNumber : " << sNumber << endl;
	cout << "lNumber : " << lNumber << endl;
	cout << "llNumber : " << llNumber << endl;
	cout << "cNumber : " << cNumber << endl;
	cout << endl << endl;

	TEXTCOLOR_MAGENTA;
	cout << "�Ǽ��� ����غ���" << endl;
	cout << "------------------" << endl;
	cout << "fNumber : " << fNumber << endl;
	cout << "dNumber : " << dNumber << endl;
	cout << endl << endl;

	TEXTCOLOR_YELLOW;
	cout << "�� �ܸ� ����غ���" << endl;
	cout << "------------------" << endl;
	cout << "bFlag : " << bFlag << endl;
	cout << "str : " << str.c_str() << endl;
	cout << endl << endl;
}

void Execute()
{
	Initialize();
	Print();
}

//������ ��� ��Ģ
// -> ������� �Ұ�
// -> ����� Ű���� ��� �Ұ�
// -> ��ҹ��ڸ� ������
// -> Ư������ �Ұ�(����ٴ� ����)
// -> ������ ������ ���� �Ұ�
