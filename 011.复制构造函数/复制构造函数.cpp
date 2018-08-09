#include "stdafx.h"
#include<iostream>;
using namespace std;


class Point//复制构造函数(不会改变原来的引用，复制一份引用的构造函数)
{
public:
	Point();
	Point(int a, int b);
	Point(const Point & p);
	int getX();
private:
	int x, y;
};

Point::Point() :Point(0, 0)
{

}

Point::Point(int a, int b)
{
	x = a;
	y = b;
}

Point::Point(const Point & p)
{
	x = p.x;
	y = p.y;
	cout << "复制构造函数" << endl;
}

int Point::getX()
{
	return x;
}


void func1(Point p)//p复制了实参的构造函数
{
	cout << p.getX() << endl;
}

Point func2()
{
	Point a(1, 0);
	return a;
}


int main()
{
	Point a(2, 1);
	Point b(a);//b复制了对象a的构造函数来初始化
	cout << b.getX() << endl;
	func1(b);
	b = func2(); //b复制了一份func2()返回的对象的引用构造函数
	cout << b.getX() << endl;
	return 0;
}