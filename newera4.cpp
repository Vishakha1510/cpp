#include<iostream>

using namespace std;

class room {
	int l;
	int b;
	int h;
	public : 
		void getroom()
		{
			cout<<"Enter length, breath, height: ";
			cin>>l>>b>>h;
		}
		void putroom()
		{
			cout<<"Length: "<<l<<",Breath: "<<b<<", Height: "<<h<<endl;
		}
};
class address {
	int hno;
	char cty[30];
	char state[30];
	public : 
		void getad()
		{
			cout<<"house number : ";
			cin>>hno;
			cout<<"city :";
			cin>>cty;
			cout<<"state : ";
			cin>>state;
		}
		void putad()
		{
			cout<<"House No.: "<<hno<<",city: "<<cty<<",state: "<<state<<endl;
		}
};

class house{
	char housename[30];
	address a;
	room r[10]; 

	public : 
			void input();
			void display();
};
void house :: input()
{	
	cout<<"Enter house name: ";
	cin>>housename;
	a.getad();
	
	for(int i=0;i<3;i++){
		
		cout<<"Room Details : "<<i+1<<"\n";
		r[i].getroom();
	}
}

void house :: display()
{	
	cout<<"House name: "<<housename<<endl;

	
	for(int i=0;i<3;i++){
		
		cout<<"Room Details : "<<i+1<<"\n";
		r[i].putroom();
	}
}

int main()
{
	house x;
	x.input();
	x.display();
	return 0;
}

