#include "../stdafx.h"
#include "StlDemo.h"
#include <vector>
#include <map>

#define Pair
#define Vector

void StlDemo::Execute()
{

#ifndef Pair
	cout << "Pair" << endl;
	cout << "---------------" << endl;
	//초기화 방법1
	pair<const char*, float> p;
	p.first = "PI";
	p.second = 3.14f;
	cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	//초기화 방법2
	p = { "Max", 999.f };
	cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	//초기화 방법3
	p = make_pair("Min", 0.f);
	cout << p.first << " : " << p.second << endl;
	cout << endl << endl;
#endif

#ifndef Vector
	vector<long> vec; //long vec[??]

	cout << "push_back" << endl;
	cout << "----------------" << endl;
	for (long i = 0; i < 10; i++)
		vec.push_back(i);

	cout << "배열처럼 인덱스로 출력" << endl;
	cout << "--------------------" << endl;
	for (long i = 0; i < vec.size(); i++)
		cout << vec[i] << ", ";
	cout << endl;

	cout << "pop_back" << endl;
	cout << "----------------" << endl;
	vec.pop_back();

	cout << "Range Based Loop로 출력" << endl;
	cout << "----------------" << endl;
	for (long node : vec)
		cout << node << ", ";
	cout << endl << endl;

	cout << "주소 출력해보기" << endl;
	cout << "-------------------" << endl;
	long* ptr = &vec[0];
	cout << "포인터로 출력 : " << ptr << endl;

	ptr = vec.data() + 1;
	cout << "data() + 1로 출력 : " << ptr << endl;

	vector<long>::iterator it = vec.begin() + 2;
	cout << "iterator로 출력 : " << *(it + 2) << endl;

	/*
	.begin() : 0번 인덱스의 주소(시작주소)
	.end() : 마지막 인덱스 주소
	.insert(iter, value) : 특정 iter인덱스에 value를 삽입
	.insert(iter, range, value) : 특정 iter인덱스부터 range 개수만큼 value를 삽입
	.erase(iter) : 특정 iter인덱스를 삭제
	.clear() : 전체 삭제
	*/

	cout << "insert -> 5번 인덱스 자리에 10을 끼워넣자" << endl;
	cout << "--------------------------------------" << endl;
	vec.insert(vec.begin() + 5, 10);
	for (long v : vec)
		cout << v << ", ";
	cout << endl << endl;

	cout << "insert -> 끝에서 2번째 범위로 3칸 100" << endl;
	cout << "--------------------------------------" << endl;
	vec.insert(vec.end() - 2, 3, 100);
	for (long v : vec)
		cout << v << ", ";
	cout << endl << endl;

	cout << "5번 인덱스 삭제" << endl;
	cout << "--------------------------------------" << endl;
	vec.erase(vec.begin() + 5);
	for (long v : vec)
		cout << v << ", ";
	cout << endl << endl;

	cout << "iterator를 이용한 출력" << endl;
	cout << "--------------------------------------" << endl;
	for (it = vec.begin(); it != vec.end(); it++)
		cout << *it << ", ";
	cout << endl << endl;

	cout << "assign을 사용해 배열처럼 고정 크기 할당하기" << endl;
	cout << "-------------------------------------------" << endl;
	vector<long> vec2; //-> long vec2[????]
	//vec2.assign(5, long()); // -> long vec2[5]
	//cout << "vec2의 크기는 : " <<  vec2.size() << endl;
	
	cout << "assign을 사용한 vector끼리 복사" << endl;
	cout << "-------------------------------------------" << endl;
	vec2.assign(vec.begin(), vec.begin() + 4);
	
	for (auto v : vec2)
		cout << v << ","; 
	cout << endl;

	cout << "capacity란" << endl;
	cout << "-------------------------------------------" << endl;
	vec2.clear();
	for (long i = 0; i < 100; i++)
	{
		vec2.push_back(i);
		cout << "Size : " << vec2.size() << ", Capacity : " << vec2.capacity() << endl;
	}
#endif

	map<string, UINT> potions;
	
	//초기화 방법1. pair를 이용한 방식
	pair<string, UINT> p = make_pair("핫식스", 1);
	potions.insert(p);
	
	potions.insert(make_pair("레드불", 2));

	//first(Key)의 템플릿 타입을 인덱스로 이용한 방식
	potions["몬스터"] = 3;
	
	cout << "출력" << endl;
	cout << "---------------" << endl;
	//Key를 인덱스로 사용해서 출력
	cout << "효과 : " << potions["핫식스"] << endl; 

	//find()를 사용해서 출력
	map<string, UINT>::iterator it = potions.find("레드불");
	cout << "효과 : " <<  it->second << endl; 
	cout << endl << endl;

	for (auto p : potions)
		cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	//삭제
	potions.erase("레드불");
	for (auto p : potions)
		cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	//키의 중복
	potions["핫식스"] = 100;
	potions["핫세븐"] = 200;
	potions["핫에잇"] = 300;
	potions["핫에잇"] = 0;

	for (auto p : potions)
		cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	cout << potions.count("핫식스") << endl;
	cout << potions.count("레드불") << endl;
}
