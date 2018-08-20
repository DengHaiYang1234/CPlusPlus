#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;

#pragma region 动态创建数组
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
	Point* ptr = new Point[2];
	ptr[0].move(11, 22);
	ptr[1].move(22, 33);
	cout << "Delete...." << endl;
	delete[] ptr;
	return 0;
}

#pragma endregion