#include "stdafx.h"
#include <iostream>
using namespace std;


//限执行基类的继承顺序，在执行组合的类
class Base1
{
public:
	Base1(int i)
	{
		cout << "Constructing Base1:" <<i << endl;
	}
	~Base1()
	{
		cout << "Destrusctor Base1" << endl;
	}
};

class Base2
{
public:
	Base2(int i)
	{
		cout << "Constructing Base2:" << i << endl;
	}
	~Base2()
	{
		cout << "Destrusctor Base2" << endl;
	}
};

class Base3
{
public:
	Base3()
	{
		cout << "Constructing Base3" << endl;
	}
	~Base3()
	{
		cout << "Destrusctor Base3" << endl;
	}
};


class Derived : public Base2,public Base1,public Base3
{
public:
	Derived(int a, int b, int c, int d) :Base1(a), member2(b), member1(c), Base2(b) {}

private:
	Base1 member1;
	Base2 member2;
	Base3 member3;
};

int main()
{
	Derived a(1, 2, 3, 4);
	return 0;
}
