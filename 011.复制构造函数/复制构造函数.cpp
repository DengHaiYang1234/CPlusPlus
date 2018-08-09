#include "stdafx.h"
#include<iostream>;
using namespace std;


class Point//���ƹ��캯��(����ı�ԭ�������ã�����һ�����õĹ��캯��)
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
	cout << "���ƹ��캯��" << endl;
}

int Point::getX()
{
	return x;
}


void func1(Point p)//p������ʵ�εĹ��캯��
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
	Point b(a);//b�����˶���a�Ĺ��캯������ʼ��
	cout << b.getX() << endl;
	func1(b);
	b = func2(); //b������һ��func2()���صĶ�������ù��캯��
	cout << b.getX() << endl;
	return 0;
}