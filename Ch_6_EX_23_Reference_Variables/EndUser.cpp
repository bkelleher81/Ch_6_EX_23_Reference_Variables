#include"RefVar.h"
#include<iostream>
using namespace std;

int main()
{
	RefVar h;
	int i = 4;
	h.foo1(i);
	h.foo2(i);
	h.foo3(&i);

	return 0;
};