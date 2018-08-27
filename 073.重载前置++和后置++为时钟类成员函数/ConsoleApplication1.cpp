// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


#pragma region 重载前置++和后置++为时钟类成员函数
class Clock
{
public:
	Clock(int hour = 0, int minute = 0, int second = 0);
	void showTime() const;
	//前置单目运算符重载
	Clock &operator ++();
	//后置单目运算符重载
	Clock operator ++(int);
private:
	int hour, minute, second;
};

Clock::Clock(int hour, int minute, int second)
{
	if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60)
	{
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	else
	{
		cout << "Time error!" << endl;
	}
}

void Clock::showTime() const
{
	cout << hour << ":" << minute << ":" << second << endl;
}

//前置++
Clock & Clock::operator++()
{
	second++;
	if (second >= 60)
	{
		second -= 60;
		minute++;
		if (minute >= 60)
		{
			minute -= 60;
			hour = (hour + 1) % 24;
		}
	}
	return *this;//返回+1之后的数
}
//后置++
Clock Clock::operator++(int)
{
	//注意形参表中的整型参数
	Clock old = *this;
	//调用前置++运算符
	++(*this);
	return old;//返回没有+1的值。（其实已经+1）
}

int main()
{
	Clock myClock(23, 59, 59);
	cout << "First time output";
	myClock.showTime();
	cout << "Show myClock++" << endl;
	(myClock++).showTime();
	cout << "Show ++ myClock:   ";
	(++myClock).showTime();
	return 0;
}
#pragma endregion



