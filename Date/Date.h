#include<iostream>
using namespace std;
class Date{
	private:
	int countLeapYears(int,int); 
int dd,mm,yyyy;
	public:
Date();
Date(int,int,int);
void compare(Date d);
void difference(Date d);
void display();
bool operator ==(Date d);
bool operator !=(Date d);
void operator -(Date d);
void operator +(int real);
};
