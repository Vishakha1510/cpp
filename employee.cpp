#include<iostream>
using namespace std;
class A{
	  public:
	  	string employee;
	  	int id,age,salary,experience;
		  	  	string name,role,city,company_name;
	  	void in()
	  	{
	  		cout<<"enter id: ";
	  		cin>>id;
	  		cout<<"enter name: ";
	  		cin>>name;
	  		cout<<"enter role: ";
	  		cin>>role;
	  		cout<<"enter age: ";
	  		cin>>age;
	  		cout<<"enter salary: ";
	  		cin>>salary;
	  		cout<<"enter experience: ";
	  		cin>>experience;
	  		cout<<"enter city: ";
	  		cin>>city;
	  		cout<<"enter company_name: ";
	  		cin>>company_name;
		  }
		void out()
		{
			cout<<"employee_id: "<<id<<endl;
			cout<<"employee_name: "<<name<<endl;
			cout<<"employee_role: "<<role<<endl;
			cout<<"employee_age: "<<age<<endl;
			cout<<"employee_salary: "<<salary<<endl;
			cout<<"employee_experience: "<<experience<<endl;
			cout<<"employee_city: "<<city<<endl;
			cout<<"employee_company_name: "<<company_name<<endl;
		  }  
};
int main()
{
	A a[5];
	for(int i=0;i<5;i++)
	{
		a[i].in();
	}
	for(int i=0;i<5;i++)
	{
		a[i].out();
	}
	return 0;
		  }		  

