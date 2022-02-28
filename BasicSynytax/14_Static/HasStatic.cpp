#include "../stdafx.h"
#include "HasStatic.h"

float HasStatic::pi = 3.14f;
UINT HasStatic::sCount = 0;

HasStatic::HasStatic()
{
	count++;
	sCount++;
}

HasStatic::~HasStatic()
{
	count--;
	sCount--;
}
