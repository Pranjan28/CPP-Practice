#include<iostream>
#include "Date.h"
using namespace std;
int main(){
Date d1(1,2,2005),d2(2,2,2004);
d1.compare(d2);
d1.difference(d2);
cout<<"\n d1 == d2 :"<<(d1==d2);
cout<<"\n d1 != d2 :"<<(d1!=d2);
(d1-d2);
//d1 + 31;// '+' overloaded
d1.display();
return 0;
}
