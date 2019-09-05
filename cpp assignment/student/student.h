#include<iostream>
#include<string>
using namespace std;

class Student
{ 
    private:
	string student_name;
	int roll_number;
	string course_name;

	public:
	Student()
	{
         student_name="abcd";
       	 roll_number=0;
         course_name="xyz";
         
	}	
        
        Student(string name,int roll,string course)
        {
          student_name=name;
          roll_number=roll;
          course_name=course;

        }

        ~Student()
         {

         }

        void accept()
         {
         cout<<"enter the student name:"<<end;
         cin>>student_name;
         cout<<"enter the roll number:"<<endl;
         cin>>roll_number;
         cout<<"enter the course name:"<<endl;
         cin>>course_name;
         }

         void display()
         {
          cout<<"student name "<<student_name<<endl;
          cout<<"roll number "<<roll_number<<endl;
          cout<<"course name "<<course_name<<endl;

         }

};

int main()
{
    cout<<"how many students are there in the class"<<endl;
    cin>>n;
    for(i=1;i<n;i++)
   {
    Student s[i];
    s[i].accept();
    s[i].display();
   }}