#include "stdafx.h"
#include <iostream>;
using namespace std;

class Point
{
public:
	Point(int xx,int yy);
	Point(const Point& p);
	~Point() { count--; }
	int getX() { return x; }
	int getY() { return y; }
	static void ShowCount(){ cout << "Object Count:" << count << endl; }
private:
	int x;
	int y;
	static int count;
};

Point::Point(int xx,int yy) :x(xx),y(yy)
{
	count++;
}

Point::Point(const Point &p) :x(p.x),y(p.y)
{
	count++;
}

int Point::count = 0;

int main()
{
	Point::ShowCount();
	Point a(4, 6);
	cout << a.getX() << a.getY() << endl;
	Point::ShowCount();

	Point b(a);
	cout << b.getX() << b.getY() << endl;
	Point::ShowCount();

	return 0;
}