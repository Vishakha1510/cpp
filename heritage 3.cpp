#include<iostream>
using namespace std;
class A{
	  public:
	  	string employee;
	  	int id,age,salary,experience,contact;
		string name,role,city,company_name;
		char email[10];
	  	
	};
class B:public A
	{
	
	public:
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
	  		cout<<"enter contact: ";
	  		cin>>contact;
	  		cout<<"enter email: ";
	  		cin>>email;
		  }	
	
};
class C:public B
{
	public:
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
			cout<<"employee_contact: "<<contact<<endl;
			cout<<"employee_email: "<<email<<endl;

		  }  	
};
int main()
{
C c;
c.in();
c.out();
	return 0;
		  }		  


