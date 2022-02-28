#include "../stdafx.h"
#include "StructMemberDemo.h"

enum class EColorType { Black, Blue, Green = 2, Red = 4 };
HANDLE handle = nullptr;

struct TextObject
{
	//��� ����
	string Text;
	float PositionX;
	float PositionY;
	EColorType Color;

	//��� �Լ�
	void UpdateColor()
	{
		if (handle != nullptr)
			SetConsoleTextAttribute(handle, (WORD)Color);
	}

	void UpdatePosition()
	{
		if (handle != nullptr)
		{
			COORD temp;
			temp.X = static_cast<SHORT>(PositionX);
			temp.Y = static_cast<SHORT>(PositionY);
			SetConsoleCursorPosition(handle, temp);
		}
		
	}
};


TextObject ob;

void StructMemberDemo::Initialize()
{
	handle = GetStdHandle(STD_OUTPUT_HANDLE);

	ob.Text = "��";
	ob.PositionX = 20.f;
	ob.PositionY = 20.f;
	ob.Color = EColorType::Green;
}

void StructMemberDemo::Print()
{
	cout << "����ü�� ������� ����" << endl;
	cout << "--------------------" << endl;
	cout << "Text : " << ob.Text << endl;
	cout << "Position : " << ob.PositionX << ", " << ob.PositionY << endl;
	cout << "Color : " << (int)ob.Color << endl;
	cout << endl << endl;

	cout << "����ü�� ����Լ� ����غ���" << endl;
	cout << "--------------------" << endl;
	ob.UpdateColor();
	cout << "���� ������ ���� ������? " << ob.Text <<  endl;
	
	ob.UpdatePosition();
	cout << "���� ��ġ�� �̵�������?" << endl;
	
	TEXTCOLOR_WHITE;
	cout << "����ü �迭" << endl;
	cout << "-----------" << endl;
	TextObject obs[2];
	obs[0].Text = "��";
	obs[0].PositionX = 10;
	obs[0].PositionY = 25;
	obs[0].Color = EColorType::Red;

	obs[1] = { "��", 20, 25, EColorType::Blue };

	obs[0].UpdateColor();
	obs[0].UpdatePosition();
	cout << obs[0].Text << endl;

	obs[1].UpdateColor();
	obs[1].UpdatePosition();
	cout << obs[1].Text << endl;
	cout << endl << endl;

	TEXTCOLOR_WHITE;
	cout << "����ü ������" << endl;
	cout << "-------------" << endl;

	TextObject* pob = new TextObject;

	pob->Text = "��";
	pob->Color = EColorType::Red;
	
	pob->UpdateColor();
	cout << pob->Text << endl;
	cout << endl << endl;

	delete pob;
}

void StructMemberDemo::Execute()
{
	Initialize();
	Print();
}

 