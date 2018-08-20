
#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region 封装数组类
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
		cout << "Move:" << "x=" << x << "y=" << y << endl;
	}

private:
	int x, y;
};

class ArrayOfPoints
{
public:
	ArrayOfPoints(int size) :size(size)
	{
		point = new Point[size];
	}
	~ArrayOfPoints()
	{
		cout << "Delete......" << endl;
		delete[] point;
	}

	//返回“引用”可以用来操作封装数据对象内部的数组元素，如果返回“值”则只是返回了一个副本，
	//通过副本是无法操作原来数组中的元素
	Point& element(int index)
	{
		//assert的作用就是计算表达式 expression ，如果其值为假（即为0），那么它先向stderr打印一条出错信息，然后通过调用 abort 来终止程序运行。
		assert(index >= 0 && index < size);
		return point[index];
	}

private:
	int size; // 数组大小
	Point* point; //指向动态数组首地址
};

int main()
{
	int count;
	cout << "Please enter the count of points:" << endl;
	cin >> count;

	ArrayOfPoints points(count);
	points.element(0).move(5, 0);
	points.element(1).move(10, 5);
	//检测对象中的数据是否被改变。若move是返回的“引用”，那么则被改变。若返回的是值，那么就是0,0
	cout << points.element(0).getX() << endl;
	cout << points.element(0).getY() << endl;
	return 0;
	return 0;
}


#pragma endregion








