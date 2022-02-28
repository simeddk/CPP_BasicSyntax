#include "../stdafx.h"
#include "LibraryDemo.h"

void LibraryDemo::Execute()
{
	Happy* happy = new Happy();

	happy->HAHA();
	happy->HOHO();
	happy->HEHE();

	delete happy;
}
