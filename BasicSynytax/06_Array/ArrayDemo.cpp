#include "../stdafx.h"
#include "ArrayDemo.h"

void ArrayDemo::Initialize()
{
	
}

void ArrayDemo::Print()
{
	//�迭 �ʱ�ȭ ���1
	int nArr[5];
	nArr[0] = 10;
	nArr[1] = 20;
	nArr[2] = 30;
	nArr[3] = 40;
	nArr[4] = 50;
	
	cout << "�迭 ������Ʈ ����" << endl;
	cout << "-----------------" << endl;
	cout << nArr[1] << endl;
	cout << endl << endl;

	cout << "�迭 ��ü ���(������i�� ����� ��)" << endl;
	cout << "--------------------------------" << endl;
	for (int i = 0; i < 5; i++)
		cout << nArr[i] << "\t";
	cout << endl << endl;

	cout << "�迭 ��ü ���(������ݹݺ��� ��� ��)" << endl;
	cout << "--------------------------------" << endl;
	for (int element : nArr)
		cout << element << "\t";
	cout << endl << endl;

	cout << "�迭 �� Ư������ ���� �ε��� ��ȣ ã��" << endl;
	cout << "--------------------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (nArr[i] == 40)
		{
			cout << "40�� ��� �ִ� �ε����� [" << i << "]��° �ε�����" << endl;
			break;
		}
	}
	cout << endl << endl;

	cout << "�迭 �� Ư������ ���� �ε��� ��ȣ ã��(������� Ver)" << endl;
	cout << "--------------------------------" << endl;
	int count = 0;
	for (int element : nArr)
	{
		if (element == 40)
		{
			cout << "40�� ��� �ִ� �ε����� [" << count << "]��° �ε�����" << endl;
			break;
		}

		count++;
	}
	cout << endl << endl;

}

void ArrayDemo::Execute()
{
	Initialize();
	Print();
}
