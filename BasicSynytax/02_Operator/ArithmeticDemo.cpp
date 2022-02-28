#include "../stdafx.h"
#include "ArithmeticDemo.h"

int a;
int b;

void ArithmeticDemo::Initialize()
{
	a = 10;
	b = 3;
}

void ArithmeticDemo::Print()
{
	PrintFile;
	cout << "»çÄ¢¿¬»êÀ» ÇØº¸ÀÚ" << endl;
	cout << "--------------" << endl;

	int result;
	result = a + b;
	cout << "µ¡¼À : " << result << endl;

	result = a - b;
	cout << "»¬¼À : " << result << endl;

	result = a * b;
	cout << "°ö¼À : " << result << endl;

	result = a / b;
	cout << "³ª´°¼À : " << result << endl;

	result = a % b; //mod, ³ª¸ÓÁö ¿¬»ê
	cout << "³ª¸ÓÁö : " << result << endl;
	cout << endl << endl;

	cout << "¿¬»êÀÚ ¿î¼±¼øÀ§" << endl;
	cout << "-------------" << endl;
	result = a + b * a - b; //10 + 3 * 10 - 3 -> 37
	cout << result << endl;

	result = ((a + b) * a) - b; //((10 + 3) * 10) - 3 -> 127
	cout << result << endl;

	cout << endl << endl;
}

void ArithmeticDemo::Execute()
{
	Initialize();
	Print();
}