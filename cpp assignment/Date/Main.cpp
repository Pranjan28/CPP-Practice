#include"date.h"

int main()
{
	Date d1(25,04,2019),d2(25,04,2019);
	cout<<"Total Days in 2019: "<<d1.Diff(d2);
/*	if(d1==d2)
		cout<<"\nDates are same";
	else
		cout<<"\nDates are diferent";*/
	cout<<((d1==d2)?"Dates are same":"Dates are diferent");
}
