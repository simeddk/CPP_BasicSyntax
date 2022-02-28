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
	cout << "동적할당" << endl;
	cout << "--------------" << endl;
	cout << "구조체 한개의 크기 : " << sizeof(Bullet) << endl; //80 Bytes
	
	Bullet* bullets;

	cout << "몇개 할당받을래 ? ";
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
	cout << "필요에 따라 런타임 중에 메모리 할당/해제해보기" << endl;
	cout << "-------------------------------------------" << endl;
	
	int* ptr = nullptr;

	while (true)
	{
		//메모리 할당
		cout << "-------------------------------" << endl;
		cout << "메모리 할당 받을래 ? (y/n) : ";
		char input;
		cin >> input;

		if (input == 'y')
		{
			if (ptr == nullptr)
			{
				ptr = new int;

				TEXTCOLOR_GREEN;
				cout << "새로운 주소(" << ptr << ")이 할당됨" << endl;
				TEXTCOLOR_WHITE;
			}
			else
			{
				cout << "기존에 이미 할당받은 주소(" << ptr << ")이 존재함" << endl;
			}
			
		}
		else
			cout << "메모리 할당하지 않음" << endl;

		//할당메모리에 값 Write
		if (ptr != nullptr)
		{
			int value;
			cout << "할당된 메모리(" << ptr << ")에 넣을 값 : ";
			cin >> value;
			*ptr = value;

			cout << "*ptr : " << *ptr << endl;
		}
		
		//메모리 해제
		if (ptr)
		{
			cout << "메모리 해제 (y/n) : ";
			cin >> input;

			if (input == 'y')
			{
				TEXTCOLOR_RED;
				cout << "기존 주소(" << ptr << ")가 해제됨" << endl;
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
	cout << "ptr1에 저장된 주소 : " << ptr1 << endl;
	cout << "ptr2에 저장된 주소 : " << ptr2 << endl;
	cout << "ptr1에 저장된 주소의 값 : " << *ptr1 << endl;
	cout << "ptr2에 저장된 주소의 값 : " << *ptr2 << endl;

	
	cout << ptr1 << endl; //실행가능 <- 이주소는 우리에게 의미가 1도 없는 주소(쓰레기 주소)
	cout << *ptr1 << endl; //실행불가(힙터짐) 쓰레기 주소에는 접근 권한이 없기 때문에
	cout << ptr2 << endl;
	cout << *ptr2 << endl;

	//delete ptr1;
}

void DynamicAllocateDemo::Execute()
{
	Initialize();
	Print();
}
