#include "stdafx.h"
#include <iostream>;
#include <string>;
#include <cmath>;
using namespace std;

class Point
{
public:
	Point(int xx, int yy);
	~Point();//Îö¹¹º¯Êý

private:
	int x, y;
};

Point::Point(int xx, int yy)
{
	x = xx;
	y = yy;
}

Point::~Point()
{

}


int main()
{
	return 0;
}