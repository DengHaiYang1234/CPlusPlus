#include "stdafx.h"
#include <iostream>
using namespace std;

class Base0
{
public:
	Base0(int var) :var0(var) {}
	int var0;
	void fuc0() { cout << "Member of Base0:" << var0 << endl; }
};

class Base1 : virtual public Base0//ֱ������������ഫ�ݲ���
{
public:
	Base1(int var) :Base0(var) {}
	int var1;
};

class Base2:virtual public Base0 
{
public:
	Base2(int var) :Base0(var) {}
	int var2;
};


class Derived : public Base1,public Base2
{
public:
	Derived(int var) :Base0(var),Base1(var), Base2(var) {}
	int var;
	void func() { cout << "Member of Derived" << endl; }
};

int main()
{
	Derived d(1);
	d.var0 = 2; //ֱ�ӷ������������ݳ�Ա
	d.fuc0();
	return 0;
}
