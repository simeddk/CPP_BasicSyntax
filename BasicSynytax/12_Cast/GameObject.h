#pragma once

//�߻�Ŭ����(�޸𸮿� �ö� �� ����)
class GameObject
{
public:
	GameObject(string symbol, COORD position);
	virtual ~GameObject() = default;

	//���������Լ�
	virtual void Update() = 0;
	virtual void Render() = 0;

	const COORD& Position() { return position; }
	const string& Symbol() { return symbol; }
	
protected:
	string symbol;
	COORD position;

};