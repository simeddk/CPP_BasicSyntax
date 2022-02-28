#include "../stdafx.h"
#include "StaticDemo.h"
#include "HasStatic.h"

void StaticDemo::Execute()
{
	cout << "일반 지역변수와 스태틱 변수의 차이" << endl;
	cout << "------------------------------" << endl;
	for (int i = 0; i < 3; i++)
	{
		int count = 0;
		cout << "일반 지역 변수 : " << count << endl;
		count++;
	}
	cout << endl << endl;

	for (int i = 0; i < 3; i++)
	{
		static int count = 0;
		cout << "스태틱 지역 변수 : " << count << endl;
		count++;
	}
	cout << endl << endl;

	cout << "스태틱 멤버 변수" << endl;
	cout << "------------------" << endl;
	//객체가 있는 경우
	/*HasStatic* ob = new HasStatic();
	float pi = ob->GetPi();
	cout << pi << endl;
	delete ob;
	cout << endl << endl;*/

	//객체가 없는 경우
	cout << HasStatic::pi << endl;
	cout << endl << endl;

	cout << "스태틱 멤버 함수" << endl;
	cout << "---------------" << endl;
	HasStatic* unit1 = new HasStatic();
	cout << "각자의 멤버 count는? " << unit1->MemberCount() << endl;
	cout << "스태틱 sCount는? " << unit1->StaticCount() << endl;
	cout << endl;

	HasStatic* unit2 = new HasStatic();
	cout << "각자의 멤버 count는? " << unit2->MemberCount() << endl;
	cout << "스태틱 sCount는? " << unit2->StaticCount() << endl;
	cout << endl;

	HasStatic* unit3 = new HasStatic();
	cout << "각자의 멤버 count는? " << unit3->MemberCount() << endl;
	cout << "스태틱 sCount는? " << unit2->StaticCount() << endl;
	cout << endl;

	cout << "소멸중 : " << HasStatic::StaticCount() << endl;

	delete unit1;
	cout << "소멸중 : " << HasStatic::StaticCount() << endl;

	delete unit2;
	cout << "소멸중 : " << HasStatic::StaticCount() << endl;

	delete unit3;
	cout << "소멸중 : " << HasStatic::StaticCount() << endl;
	
}
