#include "RefVar.h"
#include<iostream>
using namespace std;


void RefVar::foo1(int refVar)
{
	cout << "In main, value is " << refVar << endl;
	cout << "Now calling doubleNum..." << endl;
	refVar = refVar * 2;
	cout << "Now back in main, value is " << refVar << endl;
	cout << endl;
}

void RefVar::foo2(int& refVar)
{
	cout << "In main, value is " << refVar << endl;
	cout << "Now referencing doubleNum..." << endl;
	refVar = refVar *2;
	cout << "Now stored in main, value is " << refVar << endl;
	cout << endl;
}

void RefVar::foo3(int* refVar)
{
	cout << "In main, value is " << *refVar << endl;
	cout << "Now pointing doubleNum..." << endl;
	*refVar = *refVar * 2;
	cout << "Now stored in main, value is " << *refVar << endl;
	cout << endl;
}
