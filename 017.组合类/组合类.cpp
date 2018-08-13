#include "stdafx.h"
#include <iostream>;
#include <string>;
#include <cmath>;
using namespace std;


class Point
{
public:
	Point(int xx, int yy);
	Point();
	Point(const Point& p);
	~Point();
	int GetX();
	int GetY();

private:
	int x, y;
};

Point::Point()
{

}

Point::Point(int xx, int yy) : x(xx), y(yy)
{

}

Point::Point(const Point &p)
{
	x = p.x;
	y = p.y;
	cout << "Calling constructor of Point" << endl;
}

int Point::GetX()
{
	return x;
}

int Point::GetY()
{
	return y;
}

Point::~Point()
{
}


class Line
{
public:
	Line(Point xp1, Point xp2);
	Line();
	Line(const Line & l);
	double getLen();
	~Line();

private:
	Point p1, p2;
	double len;
};

Line::Line()
{

}

Line::Line(const Line& l) :p1(l.p1), p2(l.p2)
{
	cout << "Calling copy constructor of Line" << endl;
	len = l.len;
}

Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2)
{
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.GetX() - p2.GetX());
	double y = static_cast<double>(p1.GetY() - p2.GetY());
	len = sqrt(x * x + y * y); //ÇóÆ½·½¸ú
}

Line::~Line()
{
}

double Line::getLen()
{
	return len;
}

int main()
{
	Point mypl1(1, 1), myp2(8, 10);
	Line line(mypl1, myp2);
	Line line2(line);
	cout << "The length of the line is:" << endl;
	cout << line.getLen() << endl;
	cout << "The length of the line2 is:" << endl;
	cout << line2.getLen() << endl;
}