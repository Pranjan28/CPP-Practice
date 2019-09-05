#include"date.h"

Date::Date(int d=1,int m=1,int y=2000):dd(d),mm(m),yyyy(y)
{

}

int Date::Diff(Date d1)
{
	//Let's calculate days of date 1
	if(yyyy==d1.yyyy)
	{	
		int TotalDays=0;
		TotalDays=TotalDays+(DaysInMonths(mm)-dd);
		for(int i=mm+1;i<=12;i++)
			TotalDays+=DaysInMonths(i);
		return TotalDays;
	}
	else
	{
		cout<<"Date's bigger";
		return 0;
	}
}

int Date::DaysInMonths(int mm)
{
	if(mm==2)
	{
		return 29;
	}
	else	if(mm<=7 && mm%2!=0)
	{
		return 31;
	}
	else if(mm>7 and mm%2==0)
	{
		return 31;
	}
	else
	{
		return 30;
	}
}

bool Date::operator ==(Date& d)
{
	return (this->dd==d.dd and this->mm==d.mm and this->yyyy==d.yyyy);
}
Date::~Date()
{
	cout<<"\nDate destroyed"<<endl;
}
