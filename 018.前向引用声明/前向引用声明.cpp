#include "stdafx.h"
#include <iostream>;
#include <string>;
#include <cmath>;
using namespace std;


//���໹û�б�����֮ǰ����Ҫ�õ��࣬��������һ��������������ʹ�ö����е��κη�����
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
