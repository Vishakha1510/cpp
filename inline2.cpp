#include<iostream>
using namespace std;
class A{
	public:
		int year,salary;
		string name,add;
	string employee;
	
	void in()
	{
		cout<<"enter employee name:";
		cin>>name;
		cout<<"enter year of joining:";
		cin>>year;
		cout<<"enter address:";
		cin>>add;
		cout<<"enter employee salary:";
		cin>>salary;		
			
	}
	void out()
	{
		cout<<"Name:"<<name;
		cout<<"\tYear of joining:"<<year;
		cout<<"\tSalary:"<<salary;
		cout<<"\tAddress:"<<add;
		cout<<"\n";
	}
};
int main()
{
	A a[3];
	
	for(int i=0;i<3;i++)
	{
		a[i].in();
	}
	for(int i=0;i<3;i++)
	{
		a[i].out();
	}
	return 0;
}
