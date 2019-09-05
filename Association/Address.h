#include<iostream>
using namespace std;

class Address
{
	private:
		string Houseno;
		string laneno;
		string area;
		string pincode;

	public:
		Address();
		~Address();
		void Accept();
		void Display() const;

};

Address::Address():Houseno("1000"),laneno("1200"),area("abc"),pincode("1111")
{
	cout<<"\nAddress has been assigned to default value";
}

Address::~Address()
{
	cout<<"\nAddress destroyed";
}
