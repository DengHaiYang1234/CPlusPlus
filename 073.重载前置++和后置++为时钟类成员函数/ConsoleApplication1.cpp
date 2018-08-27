// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;


#pragma region ����ǰ��++�ͺ���++Ϊʱ�����Ա����
class Clock
{
public:
	Clock(int hour = 0, int minute = 0, int second = 0);
	void showTime() const;
	//ǰ�õ�Ŀ���������
	Clock &operator ++();
	//���õ�Ŀ���������
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

//ǰ��++
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
	return *this;//����+1֮�����
}
//����++
Clock Clock::operator++(int)
{
	//ע���βα��е����Ͳ���
	Clock old = *this;
	//����ǰ��++�����
	++(*this);
	return old;//����û��+1��ֵ������ʵ�Ѿ�+1��
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



