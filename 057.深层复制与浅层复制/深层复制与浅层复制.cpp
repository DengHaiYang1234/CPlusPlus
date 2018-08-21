#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


#pragma region 深层复制与浅层复制
//浅层复制调用默认的复制构造函数，当复制的对象时指针类型是，那么相当于被复制与复制指针都指向了同一个地址，那么在调用析构函数的时候，第一个地址被删除了（内存被释放了），第二个就会报错。
//深层复制,按照被复制对象大小，重新构造了一个存放数据的内存。也就是说两个指针指向不同的内存单元（地址），再调用析构函数时互不影响。
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

	Point(const Point& point)
	{
		cout << "Cpostructor Called:" << endl;
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
	ArrayOfPoints(const ArrayOfPoints &arr);

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


ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints &arr)
{
	size = arr.size;
	point = new Point[size];
	for (int i = 0; i < size; i++)
	{
		point[i] = arr.point[i];
	}
}

int main()
{
	int count;
	cout << "Please enter the count of points:" << endl;
	cin >> count;

	ArrayOfPoints pointArray1(count);
	pointArray1.element(0).move(50, 10);
	pointArray1.element(1).move(1050, 50);
	//检测对象中的数据是否被改变。若move是返回的“引用”，那么则被改变。若返回的是值，那么就是0,0
	ArrayOfPoints pointArray2(pointArray1);
	
	cout << "Copy of points" << endl;
	cout << "point_0 of 1:" << pointArray2.element(0).getX() << ","<< pointArray2.element(0).getY()<<endl;
	cout << "point_1 of 2:" << pointArray2.element(1).getX() << "," << pointArray2.element(1).getY() << endl;
	return 0;
}
#pragma endregion