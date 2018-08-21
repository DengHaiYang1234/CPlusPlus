#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


#pragma region 使用复制构造（未使用移动构造）
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