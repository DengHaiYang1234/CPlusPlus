#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;


#pragma region ����ָ��
class Point
{
public:
	Point(int xx, int yy) : x(xx), y(yy) {}
	int getX() { return x; }
	int getY() { return y; }
	//~Point();

private:
	int x, y;
};

int main()
{
	Point a(4, 5);
	Point* p1 = &a;  //�������ָ�룬��a�ĵ�ַ��ʼ��
	cout << p1->getX() << endl;//��ָ����ʶ����Ա
	cout << a.getX()<<endl;//�ö��������ʶ����Ա
}


#pragma endregion