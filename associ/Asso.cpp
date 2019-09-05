#include<iostream>
#include<string>
using namespace std;


class Address
{
	int pincode;
	int flatno;
	string city;

	public:
	Address()
	{
	}
	Address(int pin,int flat,string c)
	{	pincode=pin;
		flatno=flat;
		city=c;
	}
	void Accept()
	{   cout<<"enter the pincode"<<endl;
		cin>>pincode;
		cout<<"enter the flatno"<<endl;
		cin>>flatno;
		cout<<"enter the city"<<endl;
		cin>>city;
	}

	void Display()

	{   cout<<"pincode: "<<pincode<<endl;

		cout<<"flatno: "<<flatno<<endl;

		cout<<"city"<<city<<endl;

	}

};		

