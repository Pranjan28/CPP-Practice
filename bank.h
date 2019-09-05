#include<iostream>
using namespace std;

class Bank_acc
{    
      	private:
	int amt;

	public:
	Bank_acc ();	       

	virtual int deposit()=0;

	virtual void withdrawl()=0;

	int set_amt(int setamt);


};




