#include"emp.h"



//SalaryAccount::		SalaryAccount(){}

//	SalaryAccount::	SalaryAccount(int acc_n,string acc_name,int Op_date,string ba_name,string ifsc):AccountNo(acc_n),AccountName(acc_name),OpeningDate(Op_date),BankName(ba_name),IFSCCode(ifsc){}


void SalaryAccount:: Accept()
{
	cout<<"enter account no :"<<endl;
	cin>>AccountNo;

	cout<<"enter account name :"<<endl;
	cin.get();
	getline(cin,AccountName);


	cout<<"enter opening date"<<endl;
	cin>>OpeningDate;

	cout<<"enter bank name"<<endl;
	cin>>BankName;

	cout<<"enter IFSC code"<<endl;
	cin>>IFSCCode;
}

void SalaryAccount:: Display()
{
	cout<<"salary account details: "<<endl;
	cout<<"Account No: "<<AccountNo<<endl;
	cout<<"AccountName: "<<AccountName<<endl;
	cout<<"Opening Date: "<<OpeningDate<<endl;
	cout<<"BankName: "<<BankName<<endl; 
	cout<<"IFSC code: "<<IFSCCode<<endl;


}



