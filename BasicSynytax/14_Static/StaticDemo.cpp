#include "../stdafx.h"
#include "StaticDemo.h"
#include "HasStatic.h"

void StaticDemo::Execute()
{
	cout << "�Ϲ� ���������� ����ƽ ������ ����" << endl;
	cout << "------------------------------" << endl;
	for (int i = 0; i < 3; i++)
	{
		int count = 0;
		cout << "�Ϲ� ���� ���� : " << count << endl;
		count++;
	}
	cout << endl << endl;

	for (int i = 0; i < 3; i++)
	{
		static int count = 0;
		cout << "����ƽ ���� ���� : " << count << endl;
		count++;
	}
	cout << endl << endl;

	cout << "����ƽ ��� ����" << endl;
	cout << "------------------" << endl;
	//��ü�� �ִ� ���
	/*HasStatic* ob = new HasStatic();
	float pi = ob->GetPi();
	cout << pi << endl;
	delete ob;
	cout << endl << endl;*/

	//��ü�� ���� ���
	cout << HasStatic::pi << endl;
	cout << endl << endl;

	cout << "����ƽ ��� �Լ�" << endl;
	cout << "---------------" << endl;
	HasStatic* unit1 = new HasStatic();
	cout << "������ ��� count��? " << unit1->MemberCount() << endl;
	cout << "����ƽ sCount��? " << unit1->StaticCount() << endl;
	cout << endl;

	HasStatic* unit2 = new HasStatic();
	cout << "������ ��� count��? " << unit2->MemberCount() << endl;
	cout << "����ƽ sCount��? " << unit2->StaticCount() << endl;
	cout << endl;

	HasStatic* unit3 = new HasStatic();
	cout << "������ ��� count��? " << unit3->MemberCount() << endl;
	cout << "����ƽ sCount��? " << unit2->StaticCount() << endl;
	cout << endl;

	cout << "�Ҹ��� : " << HasStatic::StaticCount() << endl;

	delete unit1;
	cout << "�Ҹ��� : " << HasStatic::StaticCount() << endl;

	delete unit2;
	cout << "�Ҹ��� : " << HasStatic::StaticCount() << endl;

	delete unit3;
	cout << "�Ҹ��� : " << HasStatic::StaticCount() << endl;
	
}
