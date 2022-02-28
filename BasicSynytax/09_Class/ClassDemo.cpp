#include "../stdafx.h"
#include "ClassDemo.h"
#include "Job.h"

void ClassDemo::Execute()
{
	cout << "��ü(Instance)�� �����غ���" << endl;
	cout << "----------------" << endl;

	Job ob1;
	ob1.SetName("�˻�");
	//ob1.SetHealth(100);
	ob1.SetAttack(20);
	ob1.SetRange(1);
	ob1.ShowStatus();
	cout << endl << endl;

	Job ob2;
	ob2.SetName("�ü�");
	ob2.SetHealth(80);
	ob2.SetAttack(10);
	ob2.SetRange(5);
	ob2.ShowStatus();

	cout << "��ü�� �ּҸ� ����" << endl;
	cout << "-----------------" << endl;
	cout << "ob1�� �ּҴ� : " << &ob1 << endl;
	cout << "ob2�� �ּҴ� : " << &ob2 << endl;
	cout << "ob1�� this�� : " << ob1.GetThis() << endl;
	cout << "ob2�� this�� : " << ob2.GetThis() << endl;
	cout << endl << endl;

	cout << "��ü�� ��ȣ �ۿ�" << endl;
	enum class EAttackType
	{
		SwordManAttack = 1,
		ArcherManAttack = 2
	} attackType = EAttackType::SwordManAttack;


	int input;

	int atk = 0;
	int hp = 0;

	while (true)
	{
		cout << "1.�˻簡 ���� 2.�ü��� ����" << endl;
		cout << "���� ���� : ";
		cin >> input;
		attackType = static_cast<EAttackType>(input);

		switch (attackType)
		{
			case EAttackType::SwordManAttack:
			{
				atk = ob1.GetAttack();
				hp = ob2.GetHealth();

				cout << ob1.GetName() << "��(��) " << ob2.GetName() << "�� ����" << endl;

				hp -= atk;

				ob2.SetHealth(hp);
			}
			break;

			case EAttackType::ArcherManAttack:
			{
				atk = ob2.GetAttack();
				hp = ob1.GetHealth();

				cout << ob2.GetName() << "��(��) " << ob1.GetName() << "�� ����" << endl;

				hp -= atk;

				ob1.SetHealth(hp);
			}
			break;

			default :
			{
				cout << "�߸��� ������ �ߴ�" << endl;
			}
			break;

		}//swith

		cout << ob1.GetName() << "�� ü�� : " << ob1.GetHealth() << endl;
		cout << ob2.GetName() << "�� ü�� : " << ob2.GetHealth() << endl;
		
		cout << endl << endl;

		if (ob1.IsDead() == true || ob2.IsDead() == true)
			break;

	}//while

	if (ob1.IsDead() == true)
		cout << "�˻簡 ��ݤФ�" << endl;
	else
		cout << "�ü��� ��ݤ���" << endl;

}

 