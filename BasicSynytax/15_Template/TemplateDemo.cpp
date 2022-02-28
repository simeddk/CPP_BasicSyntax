#include "../stdafx.h"
#include "TemplateDemo.h"
#include "Stack.h"


void TemplateDemo::Execute()
{
	cout << "템플릿 함수란" << endl;
	cout << "-------------------" << endl;
	auto nResult = Clamp<int>(15, 10, 20);
	cout << "결과 : " << nResult << endl;

	auto fResult = Clamp<float>(-15.f, 3.14f, 6.28f);
	cout << "결과 : " << fResult << endl;
	
	auto cResult = Clamp<char>('M', 'A', 'Z'); //97, 65, 90
	cout << "결과 : " << cResult << endl;
	cout << endl << endl;

	cout << "특수화란" << endl;
	cout << "-------------------" << endl;
	auto strResult = Clamp<const char*>("HAHA", "HOHO", "HEHE");
	cout << "결과 : " << strResult << endl;
	cout << endl << endl;

	cout << "템플릿 클래스" << endl;
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
			name = "이름없음";
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

	items.Push(Item("식칼", 100));
	items.Push(Item("쌍칼", 200));
	items.Push(Item("부엌칼", 300));
	items.Push(Item());

	Item poped;

	for (int i = 0; i < 4; i++)
	{
		poped = items.Pop();
		cout << poped.name << " : " << poped.price << endl;
	}

}
