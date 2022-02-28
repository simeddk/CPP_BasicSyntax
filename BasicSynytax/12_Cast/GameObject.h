#pragma once

//추상클래스(메모리에 올라갈 수 없음)
class GameObject
{
public:
	GameObject(string symbol, COORD position);
	virtual ~GameObject() = default;

	//순수가상함수
	virtual void Update() = 0;
	virtual void Render() = 0;

	const COORD& Position() { return position; }
	const string& Symbol() { return symbol; }
	
protected:
	string symbol;
	COORD position;

};