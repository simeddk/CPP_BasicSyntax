#include "../stdafx.h"
#include "TemplateDemo.h"
#include "Stack.h"


void TemplateDemo::Execute()
{
	cout << "���ø� �Լ���" << endl;
	cout << "-------------------" << endl;
	auto nResult = Clamp<int>(15, 10, 20);
	cout << "��� : " << nResult << endl;

	auto fResult = Clamp<float>(-15.f, 3.14f, 6.28f);
	cout << "��� : " << fResult << endl;
	
	auto cResult = Clamp<char>('M', 'A', 'Z'); //97, 65, 90
	cout << "��� : " << cResult << endl;
	cout << endl << endl;

	cout << "Ư��ȭ��" << endl;
	cout << "-------------------" << endl;
	auto strResult = Clamp<const char*>("HAHA", "HOHO", "HEHE");
	cout << "��� : " << strResult << endl;
	cout << endl << endl;

	cout << "���ø� Ŭ����" << endl;
	cout << "-------------------" << endl;
	Stack<int> stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	cout << endl << endl;

	struct Item
	{
		Item()
		{
			name = "�̸�����";
			price = 0;
		}

		Item(const char* name, int price)
			: name(name)
			, price(price)
		{

		}

		const char* name;
		int price;
	};

	Stack<Item> items;

	items.Push(Item("��Į", 100));
	items.Push(Item("��Į", 200));
	items.Push(Item("�ξ�Į", 300));
	items.Push(Item());

	Item poped;

	for (int i = 0; i < 4; i++)
	{
		poped = items.Pop();
		cout << poped.name << " : " << poped.price << endl;
	}

}
