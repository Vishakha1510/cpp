#include<iostream>
using namespace std;
class A{
	public:
	int a=20;
	int b=10;
  void display(){
  	cout<<"a= "<<a<<endl;
   	cout<<"b= "<<b<<endl;

  }
};
class B:public A{
	public:
	void add(){
		int add=a+b;
	cout<<"addition= "<<add<<endl;	
		
	}	
	
};
class C:public A{
	public:
		void sub(){
		int sub=a-b;
	cout<<"substraction= "<<sub<<endl;	
		
	}	
	
	
};
int main(){
	B b;
	b.display();
	b.add();
	C c;
	c.display();
	c.sub();
	
	return 0;
}
