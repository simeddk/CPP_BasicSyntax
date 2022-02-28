#include "../stdafx.h"
#include "ArrayDemo2.h"

#define MAXCOUNT 5

void ArrayDemo2::Initialize()
{
	
}

void ArrayDemo2::Print()
{
	cout << "�߰�ȣ �ʱ�ȭ" << endl;
	cout << "---------------------" << endl;
	int aArr[] = { 1, 2, 3, 4, 5 };
	
	for (int n : aArr)
		cout << n << "\t";
	cout << endl << endl;

	cout << "������ �߰�ȣ �ʱ�ȭ" << endl;
	cout << "---------------------" << endl;
	int bArr[3] = { 99 };
	
	for (int n : bArr)
		cout << n << "\t";
	cout << endl << endl;

	cout << "�迭�� �ּ�" << endl;
	cout << "---------------------" << endl;
	for (int i = 0; i < 3; i++)
		cout << &bArr[i] << endl;
	cout << endl << endl;

	for (int i : bArr) //Reference
		cout << &i << endl;
	cout << endl << endl;
	
	cout << "ZeroMemory" << endl;
	cout << "----------------" << endl;
	bArr[0] = 101, bArr[1] = 102, bArr[2] = 103;
	ZeroMemory(&bArr[0], sizeof(int) * 2);
	for (int i : bArr)
		cout << i << "\t";
	cout << endl << endl;

	cout << "�� Define�� ��� �ϴ°�" << endl;
	cout << "---------------------" << endl;
	int cArr[MAXCOUNT];
	ZeroMemory(&cArr[0], sizeof(int) * MAXCOUNT);

	for (int i = 0; i < MAXCOUNT; i++)
		cArr[i] = (i + 1) * 100;

	for (int i = 0; i < MAXCOUNT; i++)
		cout << cArr[i] << "\t";
	cout << endl << endl;
	

}

void ArrayDemo2::Execute()
{
	Initialize();
	Print();
}
