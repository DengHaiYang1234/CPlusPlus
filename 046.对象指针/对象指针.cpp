#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region 对象指针
class Point
{
public:
	Point(int xx, int yy) : x(xx), y(yy) {}
	int getX() { return x; }
	int getY() { return y; }
	//~Point();

private:
	int x, y;
};

int main()
{
	Point a(4, 5);
	Point* p1 = &a;  //定义对象指针，用a的地址初始化
	cout << p1->getX() << endl;//用指针访问对象成员
	cout << a.getX()<<endl;//用对象名访问对象成员
}


#pragma endregion