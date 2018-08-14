#include "stdafx.h"
#include <iostream>;
using namespace std;

int i = 1;  //i为全局变量，具有静态生存期
void other()
{
	static int a = 2;  
	static int b;
	//a,b为静态局部变量，具有全局寿命，局部可见。且仅第一次进入函数时初始化。
	int c = 10; //c为局部变量，具有动态生存期.每次进入函数都要被初始化
	a += 2;
	i += 32;
	c += 5;
	cout << "----------OTHER--------" << endl;
	cout << "I:" << i << "A:" << a << "B:" << b << "C:" << c << endl;
	b = a;
}


int main()
{
	static int a;//a为静态局部变量，具有全局寿命，局部可见。且仅第一次进入函数时初始化
	int b = -10;//b,c为局部变量，具有动态生存期
	int c = 0;
	cout << "-----MAIN-----" << endl;
	// i: 1 a: 0  b:-10 c:0
	cout << "I:" << i << "A:" << a << "B:" << b << "C:" << c << endl;
	c += 8;
	//i:33 a:4 b:0 c:15
	other();
	cout << "-----MAIN-----" << endl;
	//i:33 a:0 b:-10 c: 8
	cout << "I:" << i << "A:" << a << "B:" << b << "C:" << c << endl;
	i += 10;
	//i:75 a:6 b:4 c:15
	other();
	return 0;
}