#include "../stdafx.h"
#include "SingleToneDemo.h"
#include "Device.h"

#define NoSingleTone

void SingleToneDemo::Execute()
{
#ifndef NoSingleTone
	Device* device = new Device(100, 40);
	device->ShowResolution();

	Device* device2 = new Device(50, 25);
	device->ShowResolution();

	delete device;
	device = nullptr;

	delete device2;
	device2 = nullptr;
#endif


	Device_SingleTone::Create(100, 40);
	Device_SingleTone::Get()->ShowResolution();
	
	Device_SingleTone::Create(20, 20); //<- ¹«½Ã
	Device_SingleTone::Get()->ShowResolution();

	Device_SingleTone::Delete();
}
