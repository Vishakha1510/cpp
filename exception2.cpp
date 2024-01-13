#include<iostream>
using namespace std;
int main()
{
	int age;
	try{
	  cout<<"Enter age: ";	
      cin>>age;
	  
	  if(age<18){
	  	  throw(age);	
	  }
	  else{
	  	cout<<"eligible to vote"<<endl;
	  }
	}
	catch(int a){
		
	cout<<"not eligible to vote"<<endl;
	
	}
}
