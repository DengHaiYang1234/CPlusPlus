#include "stdafx.h"
#include <iostream>
using namespace std;

class Base0
{
public:
	int var0;
	void func0(){ cout << "Member of Base0" << endl; }
};

class Base1 : virtual public Base0
{
public:
	int var1;
};

class Base2 : virtual public Base0
{
public:
	int var2;
};

class Derived : public Base1,public Base2
{
public:
	int var;
	void func() { cout << "Member of Derived" << endl; }
};

int main()
{
	Derived d;
	d.var0 = 2;
	d.func0();
	return 0;
}