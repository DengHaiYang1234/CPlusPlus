#include "stdafx.h"
#include <iostream>;
#include <string>;
#include <cmath>;
using namespace std;


//在类还没有被创建之前，需要用到类，所以声明一个类名（但不能使用对象中的任何方法）
class B;
class A
{
public:
	A(B b);
private:

};

A::A(B b)
{
}
class B
{
public:
	B(A a);

private:

};

B::B(A a)
{
}
