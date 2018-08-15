#include "stdafx.h"
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point() : x(0), y(0)
{
	cout << "Default Constructor Called." << endl;
}

Point::Point(int xx, int yy) : x(xx), y(yy)
{
	cout << "Constructor Called." << endl;
}

Point::~Point()
{
	cout << "Destructor Called." << endl;
}

void Point::move(int newX, int newY)
{
	cout << "Moveing the point to(" << newX << "," << newY << ")" << endl;
	x = newX;
	y = newY;
}

