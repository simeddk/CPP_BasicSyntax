#pragma once

#include "../stdafx.h"

class SomeClass
{
public:
	//�⺻ ������
	SomeClass()
		: a(1), b(2), c(3)
	{
		cout << "�⺻ �����ڰ� ȣ���" << endl;
	}

	//���� ������
	SomeClass(const SomeClass& origin)
	{
		cout << "���� �����ڰ� ȣ���" << endl;
		a = origin.a;
		b = origin.b;
		c = origin.c;
	}

	//���Կ�����
	void operator=(const SomeClass& origin)
	{
		cout << "���� �����ڰ� ȣ���" << endl;
		a = origin.a;
		b = origin.b;
		c = origin.c;
	}

	//����Լ�
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