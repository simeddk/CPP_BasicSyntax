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
	//�ʱ�ȭ ���1
	pair<const char*, float> p;
	p.first = "PI";
	p.second = 3.14f;
	cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	//�ʱ�ȭ ���2
	p = { "Max", 999.f };
	cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	//�ʱ�ȭ ���3
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

	cout << "�迭ó�� �ε����� ���" << endl;
	cout << "--------------------" << endl;
	for (long i = 0; i < vec.size(); i++)
		cout << vec[i] << ", ";
	cout << endl;

	cout << "pop_back" << endl;
	cout << "----------------" << endl;
	vec.pop_back();

	cout << "Range Based Loop�� ���" << endl;
	cout << "----------------" << endl;
	for (long node : vec)
		cout << node << ", ";
	cout << endl << endl;

	cout << "�ּ� ����غ���" << endl;
	cout << "-------------------" << endl;
	long* ptr = &vec[0];
	cout << "�����ͷ� ��� : " << ptr << endl;

	ptr = vec.data() + 1;
	cout << "data() + 1�� ��� : " << ptr << endl;

	vector<long>::iterator it = vec.begin() + 2;
	cout << "iterator�� ��� : " << *(it + 2) << endl;

	/*
	.begin() : 0�� �ε����� �ּ�(�����ּ�)
	.end() : ������ �ε��� �ּ�
	.insert(iter, value) : Ư�� iter�ε����� value�� ����
	.insert(iter, range, value) : Ư�� iter�ε������� range ������ŭ value�� ����
	.erase(iter) : Ư�� iter�ε����� ����
	.clear() : ��ü ����
	*/

	cout << "insert -> 5�� �ε��� �ڸ��� 10�� ��������" << endl;
	cout << "--------------------------------------" << endl;
	vec.insert(vec.begin() + 5, 10);
	for (long v : vec)
		cout << v << ", ";
	cout << endl << endl;

	cout << "insert -> ������ 2��° ������ 3ĭ 100" << endl;
	cout << "--------------------------------------" << endl;
	vec.insert(vec.end() - 2, 3, 100);
	for (long v : vec)
		cout << v << ", ";
	cout << endl << endl;

	cout << "5�� �ε��� ����" << endl;
	cout << "--------------------------------------" << endl;
	vec.erase(vec.begin() + 5);
	for (long v : vec)
		cout << v << ", ";
	cout << endl << endl;

	cout << "iterator�� �̿��� ���" << endl;
	cout << "--------------------------------------" << endl;
	for (it = vec.begin(); it != vec.end(); it++)
		cout << *it << ", ";
	cout << endl << endl;

	cout << "assign�� ����� �迭ó�� ���� ũ�� �Ҵ��ϱ�" << endl;
	cout << "-------------------------------------------" << endl;
	vector<long> vec2; //-> long vec2[????]
	//vec2.assign(5, long()); // -> long vec2[5]
	//cout << "vec2�� ũ��� : " <<  vec2.size() << endl;
	
	cout << "assign�� ����� vector���� ����" << endl;
	cout << "-------------------------------------------" << endl;
	vec2.assign(vec.begin(), vec.begin() + 4);
	
	for (auto v : vec2)
		cout << v << ","; 
	cout << endl;

	cout << "capacity��" << endl;
	cout << "-------------------------------------------" << endl;
	vec2.clear();
	for (long i = 0; i < 100; i++)
	{
		vec2.push_back(i);
		cout << "Size : " << vec2.size() << ", Capacity : " << vec2.capacity() << endl;
	}
#endif

	map<string, UINT> potions;
	
	//�ʱ�ȭ ���1. pair�� �̿��� ���
	pair<string, UINT> p = make_pair("�ֽĽ�", 1);
	potions.insert(p);
	
	potions.insert(make_pair("�����", 2));

	//first(Key)�� ���ø� Ÿ���� �ε����� �̿��� ���
	potions["����"] = 3;
	
	cout << "���" << endl;
	cout << "---------------" << endl;
	//Key�� �ε����� ����ؼ� ���
	cout << "ȿ�� : " << potions["�ֽĽ�"] << endl; 

	//find()�� ����ؼ� ���
	map<string, UINT>::iterator it = potions.find("�����");
	cout << "ȿ�� : " <<  it->second << endl; 
	cout << endl << endl;

	for (auto p : potions)
		cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	//����
	potions.erase("�����");
	for (auto p : potions)
		cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	//Ű�� �ߺ�
	potions["�ֽĽ�"] = 100;
	potions["�ּ���"] = 200;
	potions["�ֿ���"] = 300;
	potions["�ֿ���"] = 0;

	for (auto p : potions)
		cout << p.first << " : " << p.second << endl;
	cout << endl << endl;

	cout << potions.count("�ֽĽ�") << endl;
	cout << potions.count("�����") << endl;
}
