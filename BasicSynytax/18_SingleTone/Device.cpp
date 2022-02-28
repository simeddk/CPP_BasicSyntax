#include "..\..\GDI\Systems\Device.h"
#include "..\..\GDI\Systems\Device.h"
#include "..\..\GDI\Systems\Device.h"
#include "../stdafx.h"
#include "Device.h"

//-----------------------------------------------------------------------------
//�� �̱���
//-----------------------------------------------------------------------------

Device::Device(UINT width, UINT height)
	: width(width)
	, height(height)
{
	string temp;
	temp += "mode con:cols=";
	temp += to_string(width);
	temp += " lines=";
	temp += to_string(height);

	system(temp.c_str());

	cout << typeid(this).name() << "�� �����ڰ� ȣ���" << endl;
}


Device::~Device()
{
	cout << typeid(this).name() << "�� �Ҹ��ڰ� ȣ���" << endl;
}

void Device::ShowResolution()
{
	cout << width << " x " << height << endl;
}



//-----------------------------------------------------------------------------
//���� �̱���
//-----------------------------------------------------------------------------

Device_SingleTone* Device_SingleTone::instance = nullptr;

void Device_SingleTone::Create(UINT width, UINT height)
{
	if (instance == nullptr)
		instance = new Device_SingleTone(width, height);
}

void Device_SingleTone::Delete()
{
	delete instance;
	instance = nullptr;
}

Device_SingleTone::Device_SingleTone(UINT width, UINT height)
	: width(width)
	, height(height)
{
	string temp;
	temp += "mode con:cols=";
	temp += to_string(width);
	temp += " lines=";
	temp += to_string(height);

	system(temp.c_str());

	cout << typeid(this).name() << "�� �����ڰ� ȣ���" << endl;
}

Device_SingleTone::~Device_SingleTone()
{
	cout << typeid(this).name() << "�� �Ҹ��ڰ� ȣ���" << endl;
}

void Device_SingleTone::ShowResolution()
{
	cout << width << " x " << height << endl;
}
