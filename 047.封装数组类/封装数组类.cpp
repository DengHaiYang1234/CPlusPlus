
#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region ��װ������
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

	//���ء����á���������������װ���ݶ����ڲ�������Ԫ�أ�������ء�ֵ����ֻ�Ƿ�����һ��������
	//ͨ���������޷�����ԭ�������е�Ԫ��
	Point& element(int index)
	{
		//assert�����þ��Ǽ�����ʽ expression �������ֵΪ�٣���Ϊ0������ô������stderr��ӡһ��������Ϣ��Ȼ��ͨ������ abort ����ֹ�������С�
		assert(index >= 0 && index < size);
		return point[index];
	}

private:
	int size; // �����С
	Point* point; //ָ��̬�����׵�ַ
};

int main()
{
	int count;
	cout << "Please enter the count of points:" << endl;
	cin >> count;

	ArrayOfPoints points(count);
	points.element(0).move(5, 0);
	points.element(1).move(10, 5);
	//�������е������Ƿ񱻸ı䡣��move�Ƿ��صġ����á�����ô�򱻸ı䡣�����ص���ֵ����ô����0,0
	cout << points.element(0).getX() << endl;
	cout << points.element(0).getY() << endl;
	return 0;
	return 0;
}


#pragma endregion








