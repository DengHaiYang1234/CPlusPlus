#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


#pragma region ��㸴����ǳ�㸴��
//ǳ�㸴�Ƶ���Ĭ�ϵĸ��ƹ��캯���������ƵĶ���ʱָ�������ǣ���ô�൱�ڱ������븴��ָ�붼ָ����ͬһ����ַ����ô�ڵ�������������ʱ�򣬵�һ����ַ��ɾ���ˣ��ڴ汻�ͷ��ˣ����ڶ����ͻᱨ��
//��㸴��,���ձ����ƶ����С�����¹�����һ��������ݵ��ڴ档Ҳ����˵����ָ��ָ��ͬ���ڴ浥Ԫ����ַ�����ٵ�����������ʱ����Ӱ�졣
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
	//�������е������Ƿ񱻸ı䡣��move�Ƿ��صġ����á�����ô�򱻸ı䡣�����ص���ֵ����ô����0,0
	ArrayOfPoints pointArray2(pointArray1);
	
	cout << "Copy of points" << endl;
	cout << "point_0 of 1:" << pointArray2.element(0).getX() << ","<< pointArray2.element(0).getY()<<endl;
	cout << "point_1 of 2:" << pointArray2.element(1).getX() << "," << pointArray2.element(1).getY() << endl;
	return 0;
}
#pragma endregion