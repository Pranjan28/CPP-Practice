#include<iostream>
#include"time.h"

using namespace std;


int main(){

	Time t1(20,30,15);
	Time t2(10,40,50);
        Time t3,t4;
	cout << " t1 " << endl;
	t1.display();
	cout << " t2 " << endl;
	t2.display();
         t3.cmp( t1, t2);
         t4.diff(t1,t2);
         t1+t2;
	 return 0;
}
