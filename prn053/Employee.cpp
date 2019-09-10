#include"emp.h"

//Employee::	Employee(){}

//Employee::		Employee(int empid,string empname,string dep):EmpID(empid),EmpName(empname),Dept(dep)
//	{}

		void Employee:: Accept()
		{
			cout<<"enter employee details:"<<endl;
			cout<<"Employee ID: "<<endl;
			cin>>EmpID;
			cout<<"Employee name: "<<endl;
			cin.get();
           	        //cin>>EmpName; 
				getline(cin,EmpName);
			cout<<"department: "<<endl;
			cin>>Dept;
			SalAcc.Accept();
		}

		void Employee:: Display()
		{
			cout<<"\nEmployee details are:"<<endl;
			cout<<"employee ID: "<<EmpID<<"\nEmployee name: "<<EmpName<<"\nDepartment: "<<Dept<<endl;
			SalAcc.Display();
		}

