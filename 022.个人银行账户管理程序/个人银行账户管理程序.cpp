#include "stdafx.h"
#include <iostream>;
#include <string>;
#include <cmath>;
using namespace std;

class SavingsAccount
{
private:
	int id;   //账号
	double balance;//余额
	double rate;//存款的年利率
	int lastDate;//上次变更余额的时期
	double accumulation; //余额按日期累加之和
						 //记录一笔账，date为日期，amount为金额，desc为说明
	void record(int date, double amount);
	//获得到指定日期为止的存款金额按日期积值
	double accumulate(int date) const {
		return accumulation + balance * (date - lastDate);
	}
public:
	SavingsAccount(int date, int id, double rate);
	int getId() { return id; }
	double getBanlance() { return balance; }
	double getRate() { return rate; }
	void deposit(int date, double amount);   //存入现金
	void withdraw(int date, double amount);  //取出现金
											 //结算利息，每年1月1日调用一次该函数
	void settle(int date);
	//显示账户信息
	void show();
	~SavingsAccount();



};

SavingsAccount::SavingsAccount(int date, int id, double rate) :id(id), balance(0), rate(rate)
, lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << "is created" << endl;
}

void SavingsAccount::record(int date, double amount)
{
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;
	balance += amount;
	cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}


void SavingsAccount::deposit(int date, double amount)
{
	record(date, amount);
}

void SavingsAccount::withdraw(int date, double amount)
{
	if (amount > getBanlance())
		cout << "Error:not enough money" << endl;
	else
	{
		record(date, -amount);
	}
}

void SavingsAccount::settle(int date)
{
	double interest = accumulate(date) * rate / 365;
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}

void SavingsAccount::show()
{
	cout << "#" << id << "\tBalance:" << balance << endl;
}

SavingsAccount::~SavingsAccount()
{
	cout << "析构函数" << endl;
}


int main()
{
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 45689325, 0.015);

	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.deposit(60, 4000);
	sa0.settle(90);
	sa1.settle(90);
	sa0.show();
	sa1.show();
	return 0;
}