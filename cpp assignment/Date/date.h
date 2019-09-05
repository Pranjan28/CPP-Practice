#include<iostream>
using namespace std;

class Date
{
	private:
		int dd;
		int mm;
		int yyyy;
	public:
		Date(int,int,int);
		~Date();
		int Diff(Date);
		static int DaysInMonths(int);
		bool operator==(Date&);

};
