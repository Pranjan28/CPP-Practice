#include<iostream>
#include"Date.h"
using namespace std;
Date::Date():dd(0),mm(0),yyyy(0){
}
Date::Date(int d,int m,int y):dd(d),mm(m),yyyy(y){
}
void Date :: display(){
	//cout<<"Initializing date"<<endl;
cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
}

int Date:: countLeapYears(int years,int month) 
{ 
    if (month <= 2) 
        years--; 

    return years / 4 - years / 100 + years / 400; 
} 

void Date:: difference(Date dt1){
			
int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    long int n1 = dt1.yyyy*365 + dt1.dd; 
  
 
    for (int i=0; i<dt1.mm - 1; i++) 
        n1 += monthDays[i]; 
  
    n1 += countLeapYears(dt1.yyyy,dt1.mm); 
  
  
    long int n2 = yyyy*365 + dd; 
    for (int i=0; i<mm - 1; i++) 
        n2 += monthDays[i]; 
    n2 += countLeapYears(yyyy,mm); 
	
	// return difference between two counts 
	int diff=0;
	if(n1>n2)
	diff=(n1-n2);
	else
	diff=(n2-n1);

    cout<<"Difference = "<<diff<<endl;

}

void Date::compare(Date d1){
if(yyyy == d1.yyyy){
	if(mm == d1.mm){
		if(dd > d1.dd)
		cout<<"First is greater";
		else
			cout<<"Second is greater";
	}
	else{
		if(mm > d1.mm)
		cout<<"First is greater";
		else
		cout<<"Second is greater";
	}
}
                else{
			if(yyyy > d1.yyyy)
			cout<<"First is greater";
			else
			cout<<"Second is greater";

                }

}

bool Date :: operator ==(Date d){

if((yyyy==d.yyyy)&&(mm==d.mm)&&(dd==d.dd))
	return true;
else 
	return false;
}

bool Date :: operator !=(Date d){
return !(*this==d);
}

void Date :: operator-(Date d){
	Date d1=*this;
	d1.difference(d);
}

void Date :: operator +(int r){
	int nday,nmon,nyr,rem;	
	if(r>=365){
	nyr = r/365;
	rem = r % 365;
	nday = rem;
	if(nday >=30){
	nmon = nday / 30;
	nday = nday % 30;
	}
	else
	{
	nmon = 0;
	}
	}
	else{
	nyr = 0;
	if(r > 30){
	nmon = nday / 30;
        nday = nday % 30;
	}
	}
//	cout<<"\n"<<r<<" days means "<<nyr<<" years"<<nmon<<" months"<<" "<<nday<<" Days";
	yyyy = yyyy + nyr;
      	mm = mm + nmon;
	dd = dd+ nday;
	if(mm > 12){
	yyyy++;
	mm = mm + (nmon>mm)?nmon-mm:mm-nmon;
	}	
	if(dd>30){
	dd = dd + ((nday>dd)?nday-dd:dd-nday);
	}
}
