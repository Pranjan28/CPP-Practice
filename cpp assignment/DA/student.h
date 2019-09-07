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
	Student();
        Student(string name,int roll,string course);
        ~Student();
        void accept();
         void display();
         int getrollno();
               
         
};


