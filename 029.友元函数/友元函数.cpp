#include "stdafx.h"
#include <iostream>;
using namespace std;

class Point
{
public:
	Point(int xx, int yy) :x(xx), y(yy) {}
	~Point();
	int getX() { return x; }
	int getY() { return y; }
	friend float dist(Point &a, Point &b); //友元函数
private:
	int x;
	int y;
};

Point::~Point()
{
}

float dist(Point &a, Point &b)  //友元函数可以访问到Point类中的private属性的x，y
{
	double x = a.x - b.x;
	double y = a.y = b.y;
	return static_cast<float> (sqrt(x * x + y * y));
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);
	cout << "The Distance is:" << dist(p1, p2) << endl;
}