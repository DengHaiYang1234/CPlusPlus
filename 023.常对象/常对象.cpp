#include "stdafx.h"
#include <iostream>;
using namespace std;


class A
{
public:
	A(int xx, int yy) : x(xx), y(yy) {};

private:
	int x, y;
};

int main()
{
	A const a(11, 5); //a是常对象，不能被更新
	return 0;
}

