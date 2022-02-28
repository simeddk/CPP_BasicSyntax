#pragma once

#include "../stdafx.h"

class SomeClass
{
public:
	//기본 생성자
	SomeClass()
		: a(1), b(2), c(3)
	{
		cout << "기본 생성자가 호출됨" << endl;
	}

	//복사 생성자
	SomeClass(const SomeClass& origin)
	{
		cout << "복사 생성자가 호출됨" << endl;
		a = origin.a;
		b = origin.b;
		c = origin.c;
	}

	//대입연산자
	void operator=(const SomeClass& origin)
	{
		cout << "대입 연산자가 호출됨" << endl;
		a = origin.a;
		b = origin.b;
		c = origin.c;
	}

	//멤버함수
	void ShowABC()
	{
		cout << "a : " << a << endl;
		cout << "b : " << b << endl;
		cout << "c : " << c << endl;
	}

	void SetABC(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void AddThousand(SomeClass origin)
	{
		origin.a += 1000;
		origin.b += 1000;
		origin.c += 1000;
	}

	void AddThousand_Ref(SomeClass& origin)
	{
		origin.a += 1000;
		origin.b += 1000;
		origin.c += 1000;
	}

private:
	int a, b, c;
};