#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region 动态创建对象
class Point
{
public:
	Point() :x(0), y(0) {
		cout << "Default Constructor called:" << endl;
	}

	Point(int xx, int yy) :x(xx), y(yy) 
	{
		cout << "Constructor called:" << endl;
	}

	~Point()
	{
		cout << "Desstructor called:" << endl;
	}

	int getX() { return x; }

	int getY() { return y; }
	void move(int newX, int newY)
	{
		x = newX;
		y = newY;
	}

private:
	int x, y;
};

int main()
{
	cout << "Step one:" << endl;
	Point* ptr1 = new Point();
	delete ptr1;  //删除是指删除指针所指的对象，并释放它的内存空间，并不是删除指针自己
	cout << "Step two:" << endl;
	ptr1 = new Point(1,2);
	delete ptr1;
	return 0;
}
#pragma endregion