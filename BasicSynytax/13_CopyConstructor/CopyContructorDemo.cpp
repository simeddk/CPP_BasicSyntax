#include "../stdafx.h"
#include "CopyContructorDemo.h"
#include "SomeClass.h"

void CopyContructorDemo::Execute()
{
	cout << "new 할당하면 생성자가 호출됨" << endl;
	cout << "--------------------------" << endl;
	SomeClass* ob1 = new SomeClass();
	ob1->ShowABC();
	cout << endl << endl;
	
	cout << "malloc 할당하면 생성자가 호출되지 X" << endl;
	cout << "--------------------------" << endl;
	SomeClass* ob2 = (SomeClass*)malloc(sizeof(SomeClass));
	ob2->ShowABC();
	cout << endl << endl;

	cout << "복사 생성자를 호출해보자" << endl;
	cout << "--------------------------" << endl;
	SomeClass ob3;
	ob3.SetABC(100, 200, 300);
	//ob3.ShowABC();

	SomeClass ob4 = ob3; //<- 여기서 복사 생성자가 호출됨
	ob4.ShowABC();
	cout << endl << endl;

	cout << "대입연산자를 호출해보자" << endl;
	cout << "----------------------" << endl;
	SomeClass ob5;
	ob5 = ob4; //<- 복사생성자 호출X, 대입연산자
	ob5.ShowABC();
	cout << endl << endl;

	cout << "임시 객체란" << endl;
	cout << "--------------------" << endl;
	SomeClass ob6, ob7;;
	ob6.SetABC(1, 2, 3);

	ob7.AddThousand(ob6);
	ob6.ShowABC();
	cout << endl << endl;

	ob7.AddThousand_Ref(ob6);
	ob6.ShowABC();
	cout << endl << endl;

	delete ob1;
	free(ob2);

}
