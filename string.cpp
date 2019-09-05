#include<iostream>
using namespace std;

class Mystring
{
	private:
	       	char *p;
	        int size;
	public: 
               Mystring()

	       {
		       size=10;
		       p=nullptr;
	       }

		Mystring( int s)

		{
              		size=s;
			p=new char[size];

		}

		~Mystring()
		{
			delete []p;
		}
                
 		void accept()
		{	int i;
			cout<<"enter string";
			for(i=0;i<size;i++)
			{
		         cin>>*(p+i);		
			}
		}

		void display()
			

		{       int i;
			for(i=0;i<size;i++)
			{
			cout<<*(p+i);
			}
		}
                
};


int main()
{
 
	Mystring s1(7;
	s1.accept();
	s1.display();
}


