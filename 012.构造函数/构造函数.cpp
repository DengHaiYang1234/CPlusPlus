#include "stdafx.h"
#include<iostream>;
using namespace std;

class MyClass
{
public:
	MyClass(int newH, int newM, int newS);
	MyClass();
	void setTime(int newH, int newM, int newS);
	void showTime();
private:
	int hour, minute, second;
};

MyClass::MyClass(int newH, int newM, int newS) :hour(newH), minute(newM), second(newS)
{

}

MyClass::MyClass() : MyClass(0, 0, 0)
{

}

void MyClass::showTime()
{
	cout << hour << minute << second << endl;
}

void MyClass::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}


int main()
{
	MyClass mc(0, 1, 2);
	mc.showTime();
	return 0;
}