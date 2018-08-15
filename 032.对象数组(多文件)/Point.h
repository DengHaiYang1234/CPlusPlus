#ifndef _POINT_H
#define _POINT_H

class Point
{
public:
	Point();
	Point(int xx, int yy);
	~Point();
	void move(int newX, int newY);
	int getX() const { return x; }
	int getY() const { return y; }
private:
	int x, y;
};
#endif // _POINT_H

