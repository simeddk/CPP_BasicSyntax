#pragma once

//-----------------------------------------------------------------------------
//�� �̱���
//-----------------------------------------------------------------------------
class Device
{
public:
	Device(UINT width = 100, UINT height = 40);
	~Device();

	void ShowResolution();

private:
	UINT width;
	UINT height;
};


//-----------------------------------------------------------------------------
//���� �̱���
//-----------------------------------------------------------------------------
class Device_SingleTone
{
public:
	static void Create(UINT width = 100, UINT height = 40);
	static void Delete();

	static Device_SingleTone* Get() { return instance; }

private:
	Device_SingleTone(UINT width = 100, UINT height = 40);
	~Device_SingleTone();

public:
	void ShowResolution();

private:
	static Device_SingleTone* instance;

private:
	UINT width;
	UINT height;

};