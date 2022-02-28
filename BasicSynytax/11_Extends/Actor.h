#pragma once

class Actor
{
public:
	Actor();
	Actor(string symbol, SHORT x, SHORT y);
	~Actor();

	virtual void Update();
	void Render();

protected:
	COORD position;

private:
	string symbol;


};