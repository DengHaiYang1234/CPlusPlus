#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <iostream>
using namespace std;
class Employee
{
public:
	Employee(char* n = "", char* add = "", char* ct = "", char* cd = "") : name(n), address(add), city(ct), code(cd) {}

	void Display()
	{
		cout << "name:" << name << endl;
		cout << "address:" << address << endl;
		cout << "city:" << city << endl;
		cout << "code:" << code << endl;
	}

	void changeName(char* nm)
	{
		name = nm;
	}

private:
	char* name;
	char* address;
	char* city;
	char* code;
};

#endif // !_EMPLOYEE_H

