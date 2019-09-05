#include<iostream>
#include<string>
using namespace std;

class Player
{
	private:
		string name;
		int age;
		string country;

	public:
		Player():name("abc"),age(20),country("usa")
	{
	}

		Player(string pname,int page,string pcountry):name("abc"),age(20),country("usa")
	{
	}

		void accept()
		{
			cout<<"enter the name:"<<endl;
			cin>>name;
			cout<<"enter the age:"<<endl;
			cin>>age;
			cout<<"enter the country:"<<endl;
			cin>>country;
		}


		void display()
		{
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"country: "<<country<<endl;  
		}

		void sortByName()
		{


		}

		void sortByAge( int n, Player* p)  

		{
                   for(int i=0;i<n;i++)
		   {
		       for(int j=i+1;j<n;j++)
                         {
		             if(p[i].age>p[j].age)
			      {
                                 Player temp;
				 temp.age=p[i].age;
				 p[i].age=p[j].age;
				 p[j].age=temp.age;
			      }



			      }		 
			 }

		}

};


int main()
{
	int n,i;
	cout<<"how many players are there in the game?"<<endl;
	cin>>n;
	Player p[n];
	

	for(i=0;i<n;i++)
	{
		p[i].accept();    

	}
	for (i = 0; i < n; i++)
	{
		p[i].display();
	}
      
       Player::sortByAge(n,p);
	cout<<"players sorted by name"<<endl;
	for(int i=0;i<n;i++)
	{
		p[i].display();
	}


	return 0;
}
