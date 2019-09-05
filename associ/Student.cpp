#include"Asso.cpp"

class Student
{
	private:
		int rollno;
		string name;
		Address add;

	public:
		Student()
		{
		}

		Student(int r,string n):add(400601,201,"pune" )
	{
		int rollno;
		string name;

	}
		void Accept()
		{
			cout<<"enter the roll no"<<endl;
			cin>>rollno;
			cout<<"enter the name"<<endl;
			cin>>name;
			add.Accept();

		}


		void Display()
		{
			cout<<"rollno: "<<rollno<<endl;
			cout<<"name: "<<name<<endl;
			add.Display();
		}


};	



int main()
{ 
	Student s;
	s.Accept();
	s.Display();

return 0;
}

