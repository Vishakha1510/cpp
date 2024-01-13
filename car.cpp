#include<iostream>
using namespace std;
class A{
	  public:
	  	string car;
	  	int id,release_yr;
		  	  	string color,model,company_name;
	  	void in()
	  	{
	  		cout<<"enter id: ";
	  		cin>>id;
	  		cout<<"enter company_name: ";
	  		cin>>company_name;
	  		cout<<"enter color: ";
	  		cin>>color;
	  		cout<<"enter model: ";
	  		cin>>model;
	  		cout<<"enter release_yr: ";
	  		cin>>release_yr;
		  }
		void out()
		{
			cout<<"car_id: "<<id<<endl;
			cout<<"car_company_name: "<<company_name<<endl;
			cout<<"car_color: "<<color<<endl;
			cout<<"car_model: "<<model<<endl;
			cout<<"car_release_yr: "<<release_yr<<endl;
			
		  }  
};
int main()
{
	A a[4];
	for(int i=0;i<4;i++)
	{
		a[i].in();
	}
	for(int i=0;i<4;i++)
	{
		a[i].out();
	}
	return 0;
		  }		  

