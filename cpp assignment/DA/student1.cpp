#include"student.h"



Student::Student()
	{
         student_name="abcd";
       	 roll_number=0;
         course_name="xyz";
         
	}	
        
Student:: Student(string name,int roll,string course)
        {
          student_name=name;
          roll_number=roll;
          course_name=course;

        }

Student:: ~Student()
         {

         }

void Student:: accept()
         {
         cout<<"enter the student name:"<<endl;
         cin>>student_name;
         cout<<"enter the roll number:"<<endl;
         cin>>roll_number;
         cout<<"enter the course name:"<<endl;
         cin>>course_name;
         }

void Student::display()
         {
          cout<<"student name "<<student_name<<endl;
          cout<<"roll number "<<roll_number<<endl;
          cout<<"course name "<<course_name<<endl;

         }

int Student::getrollno()
         {
             return roll_number;
              
         }
