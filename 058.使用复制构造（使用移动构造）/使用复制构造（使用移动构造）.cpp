
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


#pragma region ʹ�ø��ƹ��죨ʹ���ƶ����죩
class IntNum
{
public:
	IntNum(int x = 0) : xptr(new int(x))
	{
		cout << "Calling constructor...." << endl;
	}
	IntNum(const IntNum& n) : xptr(new int(*n.xptr))
	{
		cout << "Calling copy constructor..." << endl;
	}
	//&&����ֵ���ã��������ص���ʱ��������ֵ
	IntNum(IntNum &&n) : xptr(n.xptr)
	{
		n.xptr = nullptr;
		cout << "Calling move constructor..." << endl;
	}
	~IntNum()
	{
		delete xptr;
		cout << "Destructor....." << endl;
	}

	int getInt() { return *xptr; }

private:
	int* xptr;
};

IntNum getNum()
{
	IntNum a;
	return a;
}


int main()
{
	cout << getNum().getInt() << endl;
	return 0;
}

#pragma endregion






