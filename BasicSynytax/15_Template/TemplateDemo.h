#pragma once

namespace TemplateDemo
{
	void Execute();
}

template<typename T>
T Clamp(T value, T min, T max)
{
	value = value > max ? max : value;
	value = value < min ? min : value;

	return value;
}

template<typename T>
auto Clamp(const char* value, const char* min, const char* max) -> string
{
	string msg = value;
	msg += "��(��)";
	msg += min;
	msg +=  " ~ " ;
	msg +=  max;
	msg +=  " ���̷� Ŭ���� �� �� ����";
	
	return msg;
}