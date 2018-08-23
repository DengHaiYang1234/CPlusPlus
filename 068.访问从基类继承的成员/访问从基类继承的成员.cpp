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
	d.var = 1;//������.��Ա����ʶ
	d.func();//Ĭ�Ϸ����������Ա

	d.Base1::var = 2;//������ֱ����ʶ
	d.Base1::func();//����Base1�����Ա

	p->Base2::var = 3;
	p->Base2::func();

	
	return 0;
}
