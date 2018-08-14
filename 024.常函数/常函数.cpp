#include "stdafx.h"
#include <iostream>;
using namespace std;

class  A
{
public:
	A(int xx, int yy) : x(xx), y(yy) {};
	void print();
	void print() const;

private:
	int x, y;
};

void A::print()
{
	cout << "x:" << x << "y:" << y << endl;
}

void A::print() const
{
	cout << "x;" << x << "y;" << y << endl;
}

int main()
{
	A a(5, 6);
	a.print();
	const A b(15, 65);
	b.print();  //常函数只能通过常对象来调用
	return 0;
}