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
	friend float dist(const Point &a, const Point &b); //�����ã�ֻ��ָ������ã������޸�ָ�����õ�ֵ
private:
	int x;
	int y;
};

Point::~Point()
{
}

float dist(const Point &a, const Point &b)
{
	double x = a.x - b.x;
	double y = a.y - b.y;
	return static_cast<float> (sqrt(x * x + y * y));
}