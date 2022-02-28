#pragma once

class Weapon
{
public:
	//생성자(Constructor)
	// -> 클래스 이름과 동일한 함수
	// -> 객체가 생성될 때 딱 1회 호출
	// -> 오버로딩 가능
	Weapon(); //기본생성자
	Weapon(string name, int range, int comboCount); //오버로딩된 생성자

	//소멸자(Destroctor)
	// -> 클래스의 이름과 동일한 ~함수
	// -> 객체가 소멸될 때 딱 1회 호출
	// -> 오버로딩 불가
	~Weapon();

	void ShowStatus();
	void SetName(string name) { this->name = name; }

	void SetComboPower(int count, int power);

private:
	string name;
	int range;

	int comboCount;
	int* powerTable;
};
