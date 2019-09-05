#include"time.h"

Time :: Time():hrs(0),min(0),sec(0){
}
int Time :: display(){
	cout << hrs << "  " << min << " " << sec << endl;
}

Time::Time(int h, int m, int s)
 {  hrs=h;
    min=m;
    sec=s;
}

void Time:: operator +(Time &t5)
{
	Time t6;
	t6.hrs=hrs+t5.hrs;
	t6.min=min+t5.min;
	t6.sec=sec+t5.sec;
	t6.display();
}


void Time::diff(Time c,Time d)
{
	int tsc=(c.Gethrs()*60*60)+(c.Getmin()*60)+(c.Getsec());
	int tsd=(d.Gethrs()*60*60)+(d.Getmin()*60)+(d.Getsec());
	int df=abs(tsc-tsd);
	//cout<<"Seconds diff: "<<df;
	cout<<"\n"<<(df/3600)<<"Hrs ";
	df=df%3600;
	//cout<<"Remainder is: "<<df;
	cout<<(df/60)<<" Mins ";
	df=df%60;
	cout<<df<<" Secs";

}


void Time:: cmp(Time a,Time b)
{
	if(a.Gethrs() > b.Gethrs()){
		cout << " t1 is ahead of t2 by";
		
	}
	else if(a.Gethrs() < b.Gethrs()){
		cout << " t2 is ahead of t1 by";
	}
	else {

		if(a.Getmin() > b.Getmin()){
			cout << " t1 is ahead of t2 by";
		}
		 else if(a.Getmin() < b.Getmin()){
			cout << " t2 is ahead of t1 by";
		}
		else {

			if(a.Getsec() > b.Getsec()){
				cout << " t1 is ahead of t2 by";
			}
		         else if(a.Getsec() < b.Getsec()){
				cout << " t2 is ahead of t1 by";
			}
			else {
				cout << "Both are same timings";
			}
		}
	}

}

int Time :: Gethrs(){
	return hrs;
}

int Time :: Getmin(){
	return min;
}

int Time :: Getsec(){
	return sec;
}
Time :: ~Time(){
}
