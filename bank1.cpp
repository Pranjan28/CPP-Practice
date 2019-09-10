#include<iostream>
#include<fstream>
#include<stdexcept>
using namespace std;

class Bank_acc
{
	private:
		int amount;
	public:


		Bank_acc():amount(0)
	{   

	}
		virtual void deposit()
		{

		}
		virtual void withdrawl()
		{

		}

		void set_amount()
		{       cin>>amount;
			if(amount<0)
				throw runtime_error("invalid amount");

		}

		int get_amount()
		{
			return amount;
		}
};


//class 2
class Saving_acc:public Bank_acc
{
	int interest_rate;
	int total_bal;

	public:
	Saving_acc()
	{
		interest_rate=4;
		total_bal=0;

	}

	void deposit()
	{
		cout<<"enter the amount u want to deposit"<<endl;
		Bank_acc::set_amount();
		total_bal=total_bal+Bank_acc::get_amount();
	}



	void display_bal()
	{

		cout<<"available balance= "<<total_bal<<endl;
	}


	void withdrawl()
	{
		cout<<"enter the amount you want to withdraw"<<endl;
		Bank_acc::set_amount();
		total_bal=total_bal-Bank_acc::get_amount();

	}

	void file_write()
	{
		ofstream fout("bank.txt",ios::out|ios::app);		
		fout<<" amount: "<<Bank_acc::get_amount()<<endl;

	}

	void file_read()
	{       
		string str;
		ifstream fin("bank.txt",ios::in);
		while(!fin.eof())
		{
			getline(fin,str);
			cout<<str<<endl;
		}
	}
};

int main()
{
	Bank_acc *bptr;
	Saving_acc s1;
	bptr=&s1;
	try{
		bptr->deposit();}
	catch (runtime_error e)
	{
		cout<< e.what();
	}
	s1.file_write(); 
	s1.file_read();
	s1.display_bal();
	bptr->withdrawl();
	s1.display_bal();

	return 0;


}




