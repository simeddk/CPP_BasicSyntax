#pragma once

struct Color4
{
	float R;
	float G;
	float B;
	float A;

	void Colors()
	{
		cout << "R : " << R << endl;
		cout << "G : " << G << endl;
		cout << "B : " << B << endl;
		cout << "A : " << A << endl;
	}

	void operator/=(float val)
	{
		R /= val;
		G /= val;
		B /= val;
		A /= val;
	}
};

struct Color3
{
	float R;
	float G;
	float B;

	void Colors()
	{
		cout << "R : " << R << endl;
		cout << "G : " << G << endl;
		cout << "B : " << B << endl;
	}

	Color4 operator+(Color4 col4)
	{
		Color4 temp = { R, G, B, 0 };
		temp.R += col4.R;
		temp.G += col4.G;
		temp.B += col4.B;
		temp.A += col4.A;
		return temp;
	}
	

};


namespace OperatorOverloading
{
	void Initialize();
	void Print();
	void Execute();
}

