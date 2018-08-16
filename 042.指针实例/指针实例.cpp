#include "stdafx.h"
#include <iostream>

#include "employee.h"
using namespace std;

int main()
{
	Employee e("Wang Er", "Haidian", "Beijing", "100084");
	e.Display();
	e.changeName("Li San");
	e.Display();
	//int a[] = { 111,2,3,4,5 };
	//int b[] = { 222,444 };
	//int* c = a;
	//c = b;
	//cout << c << endl;
	//char* n = "";
	//n = "123123";
	//cout << n << endl;

	return 0;
}