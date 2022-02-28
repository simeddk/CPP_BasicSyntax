#include "../stdafx.h"
#include "CopyContructorDemo.h"
#include "SomeClass.h"

void CopyContructorDemo::Execute()
{
	cout << "new �Ҵ��ϸ� �����ڰ� ȣ���" << endl;
	cout << "--------------------------" << endl;
	SomeClass* ob1 = new SomeClass();
	ob1->ShowABC();
	cout << endl << endl;
	
	cout << "malloc �Ҵ��ϸ� �����ڰ� ȣ����� X" << endl;
	cout << "--------------------------" << endl;
	SomeClass* ob2 = (SomeClass*)malloc(sizeof(SomeClass));
	ob2->ShowABC();
	cout << endl << endl;

	cout << "���� �����ڸ� ȣ���غ���" << endl;
	cout << "--------------------------" << endl;
	SomeClass ob3;
	ob3.SetABC(100, 200, 300);
	//ob3.ShowABC();

	SomeClass ob4 = ob3; //<- ���⼭ ���� �����ڰ� ȣ���
	ob4.ShowABC();
	cout << endl << endl;

	cout << "���Կ����ڸ� ȣ���غ���" << endl;
	cout << "----------------------" << endl;
	SomeClass ob5;
	ob5 = ob4; //<- ��������� ȣ��X, ���Կ�����
	ob5.ShowABC();
	cout << endl << endl;

	cout << "�ӽ� ��ü��" << endl;
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
