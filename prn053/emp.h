#ifndef EMP_H
#define EMP_H
#include<iostream>
#include<string>
using namespace std;

//declaration of class SalaryAccount
class SalaryAccount
{
	private:
		int AccountNo;
		string AccountName;
		string OpeningDate;
		string BankName;
		string IFSCCode;
	public:
		//SalaryAccount();
		//SalaryAccount(int acc_n,string acc_name,int Op_date,string ba_name,string ifsc);
		void Accept();

		void Display();
};

class Employee
{
	private:
		int EmpID;
		string EmpName;
		string Dept;
		SalaryAccount SalAcc;

	public:
		//Employee();

		//Employee(int empid,string empname,string dep):EmpID(empid),EmpName(empname),Dept(dep);
		void Accept();

		void Display();
};

#endif
