#include<iostream>
using namespace std;

class PaySlip
{
	private:
		string empNo;
		string empName;
		double basic;
		double hra;
		double da;

	public:
		PaySlip();
		~PaySlip();
		void Accept();
		void Display();
		double CalcSalary();
};
