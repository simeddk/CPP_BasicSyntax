#include "../stdafx.h"
#include "DynamicAllocateDemo.h"

#define HugeSizeAllocate
#define RunTimeAllocate

struct Vector3
{
	float x;
	float y;
	float z;
};

struct Bullet
{
	Vector3 position;
	Vector3 scale;
	Vector3 rotation;

	Vector3 velocity;
	Vector3 gravity;
	Vector3 collisionExtent; //12 * 6 + 8 = 80

	float lifeTime;
	float hitTime;
};

void DynamicAllocateDemo::Initialize()
{
	
}

void DynamicAllocateDemo::Print()
{
#ifndef HugeSizeAllocate
	cout << "�����Ҵ�" << endl;
	cout << "--------------" << endl;
	cout << "����ü �Ѱ��� ũ�� : " << sizeof(Bullet) << endl; //80 Bytes
	
	Bullet* bullets;

	cout << "� �Ҵ������ ? ";
	int size;
	cin >> size;

	bullets = new Bullet[size];
	ZeroMemory(bullets, sizeof(Bullet) * size);
	bullets[size - 1].lifeTime = 999;

	for (int i = 0; i < size; i++)
	{
		cout << bullets[i].lifeTime << "\t";

		if (i % 10 == 9)
			cout << endl;
	}

	delete[] bullets;

#endif
	
#ifndef RunTimeAllocate
	cout << "�ʿ信 ���� ��Ÿ�� �߿� �޸� �Ҵ�/�����غ���" << endl;
	cout << "-------------------------------------------" << endl;
	
	int* ptr = nullptr;

	while (true)
	{
		//�޸� �Ҵ�
		cout << "-------------------------------" << endl;
		cout << "�޸� �Ҵ� ������ ? (y/n) : ";
		char input;
		cin >> input;

		if (input == 'y')
		{
			if (ptr == nullptr)
			{
				ptr = new int;

				TEXTCOLOR_GREEN;
				cout << "���ο� �ּ�(" << ptr << ")�� �Ҵ��" << endl;
				TEXTCOLOR_WHITE;
			}
			else
			{
				cout << "������ �̹� �Ҵ���� �ּ�(" << ptr << ")�� ������" << endl;
			}
			
		}
		else
			cout << "�޸� �Ҵ����� ����" << endl;

		//�Ҵ�޸𸮿� �� Write
		if (ptr != nullptr)
		{
			int value;
			cout << "�Ҵ�� �޸�(" << ptr << ")�� ���� �� : ";
			cin >> value;
			*ptr = value;

			cout << "*ptr : " << *ptr << endl;
		}
		
		//�޸� ����
		if (ptr)
		{
			cout << "�޸� ���� (y/n) : ";
			cin >> input;

			if (input == 'y')
			{
				TEXTCOLOR_RED;
				cout << "���� �ּ�(" << ptr << ")�� ������" << endl;
				TEXTCOLOR_WHITE;

				delete ptr;
				ptr = nullptr;
			}
		}

		
	}//while
#endif

	int* ptr1 = new int;
	*ptr1 = 50;

	int* ptr2 = ptr1;
	cout << "ptr1�� ����� �ּ� : " << ptr1 << endl;
	cout << "ptr2�� ����� �ּ� : " << ptr2 << endl;
	cout << "ptr1�� ����� �ּ��� �� : " << *ptr1 << endl;
	cout << "ptr2�� ����� �ּ��� �� : " << *ptr2 << endl;

	
	cout << ptr1 << endl; //���డ�� <- ���ּҴ� �츮���� �ǹ̰� 1�� ���� �ּ�(������ �ּ�)
	cout << *ptr1 << endl; //����Ұ�(������) ������ �ּҿ��� ���� ������ ���� ������
	cout << ptr2 << endl;
	cout << *ptr2 << endl;

	//delete ptr1;
}

void DynamicAllocateDemo::Execute()
{
	Initialize();
	Print();
}
