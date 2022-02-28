#include "../stdafx.h"
#include "ClassDemo.h"
#include "Job.h"

void ClassDemo::Execute()
{
	cout << "객체(Instance)를 생성해보자" << endl;
	cout << "----------------" << endl;

	Job ob1;
	ob1.SetName("검사");
	//ob1.SetHealth(100);
	ob1.SetAttack(20);
	ob1.SetRange(1);
	ob1.ShowStatus();
	cout << endl << endl;

	Job ob2;
	ob2.SetName("궁수");
	ob2.SetHealth(80);
	ob2.SetAttack(10);
	ob2.SetRange(5);
	ob2.ShowStatus();

	cout << "객체의 주소를 보자" << endl;
	cout << "-----------------" << endl;
	cout << "ob1의 주소는 : " << &ob1 << endl;
	cout << "ob2의 주소는 : " << &ob2 << endl;
	cout << "ob1의 this는 : " << ob1.GetThis() << endl;
	cout << "ob2의 this는 : " << ob2.GetThis() << endl;
	cout << endl << endl;

	cout << "객체간 상호 작용" << endl;
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
		cout << "1.검사가 공격 2.궁수가 공격" << endl;
		cout << "누가 공격 : ";
		cin >> input;
		attackType = static_cast<EAttackType>(input);

		switch (attackType)
		{
			case EAttackType::SwordManAttack:
			{
				atk = ob1.GetAttack();
				hp = ob2.GetHealth();

				cout << ob1.GetName() << "이(가) " << ob2.GetName() << "을 때림" << endl;

				hp -= atk;

				ob2.SetHealth(hp);
			}
			break;

			case EAttackType::ArcherManAttack:
			{
				atk = ob2.GetAttack();
				hp = ob1.GetHealth();

				cout << ob2.GetName() << "이(가) " << ob1.GetName() << "을 때림" << endl;

				hp -= atk;

				ob1.SetHealth(hp);
			}
			break;

			default :
			{
				cout << "잘못된 선택을 했다" << endl;
			}
			break;

		}//swith

		cout << ob1.GetName() << "의 체력 : " << ob1.GetHealth() << endl;
		cout << ob2.GetName() << "의 체력 : " << ob2.GetHealth() << endl;
		
		cout << endl << endl;

		if (ob1.IsDead() == true || ob2.IsDead() == true)
			break;

	}//while

	if (ob1.IsDead() == true)
		cout << "검사가 쥬금ㅠㅠ" << endl;
	else
		cout << "궁수가 쥬금ㅎㅎ" << endl;

}

 