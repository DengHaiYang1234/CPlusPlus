#include "stdafx.h"
#include <iostream>;
using namespace std;

class A
{
	friend class B;
public:
	void Display() { cout <<"Class---A  x=:" <<x << endl; }

private:
	int x;
};

class B
{
public:
	void set(int data);
	void display();

private:
	A a;
};

void B::set(int data)
{
	a.x = data;
}

void B::display()
{
	a.Display();
}

int main()
{
	B b;
	b.set(10);
	b.display();
	return 0;
}


