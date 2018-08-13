#include "stdafx.h"
#include <iostream>;
#include <string>;
#include <cmath>;
using namespace std;


//公用内存空间。若使用了一种类型（int）之后再用（float）类型，那么就会把之前的类型全部替换掉。
//union MyUnion
//{
//	int a1;
//	char a2;
//	bool a3;
//};
//
////无名联合体
//union 
//{
//	int c1;
//	float f;
//}

class ExamInfo
{
public:
	ExamInfo(string name, char grade);
	ExamInfo(string name, bool pass);
	ExamInfo(string name, int percent);
	ExamInfo();
	void Show();

private:
	string name;
	enum
	{
		GRADE,
		PASS,
		PERCENTAGE
	} mode;

	union
	{
		char grade;
		bool pass;
		int percent;
	};
};
ExamInfo::ExamInfo(string name, char grade) :name(name), mode(GRADE), grade(grade)
{
}

ExamInfo::ExamInfo(string name, bool pass) : name(name), mode(PASS), pass(pass)
{
}

ExamInfo::ExamInfo(string name, int percent) : name(name), mode(PERCENTAGE), percent(percent)
{
}

ExamInfo::ExamInfo()
{
}

void ExamInfo::Show()
{
	cout << name << endl;
	switch (mode)
	{
	case ExamInfo::GRADE:
		cout << grade << endl;
		break;
	case ExamInfo::PASS:
		cout << pass << endl;
		break;
	case ExamInfo::PERCENTAGE:
		cout << percent << endl;
		break;
	default:
		break;
	}
}

int main()
{
	ExamInfo course1("English", 'B');
	ExamInfo course2("Calculus", true);
	ExamInfo course3("C++ Programming", 85);
	course1.Show();
	course2.Show();
	course3.Show();
	return 0;
}