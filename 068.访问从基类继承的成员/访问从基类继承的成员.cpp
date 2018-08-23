#include "stdafx.h"
#include <iostream>
using namespace std;


class Base1
{
public:
	int var;
	void func() { cout << "Member of Base1" << endl; }
};

class Base2
{
public:
	int var;
	void func() { cout << "Member of Base2" << endl; }
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
	Derived *p = &d;
	d.var = 1;//对象名.成员名标识
	d.func();//默认访问派生类成员

	d.Base1::var = 2;//作用域分辨符标识
	d.Base1::func();//访问Base1基类成员

	p->Base2::var = 3;
	p->Base2::func();

	
	return 0;
}
