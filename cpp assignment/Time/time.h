#include<iostream>
#include<cmath>
using namespace std;

class Time{
	int hrs;
	int min;
	int sec;
        int dh;
	public :
		Time();
		Time(int, int, int);
		int display();
		~Time();
	        void operator+(Time&);	
		int Gethrs();
		int Getmin();
		int Getsec();
                void cmp(Time,Time);
	        void diff(Time,Time);
};
