#include<iostream>
using namespace std;
int main()
{
	float a,b;
	float ans,result;
	try{
      cin>>a>>b;
	  
	  if(b==0){
	  	  throw(b);	
	  }
	  else{
	  	ans=a/b;
	  	cout<<"a/b= "<<ans<<endl;
	  }
	}
	catch(float b){
		
	cout<<"not divisible by 0"<<endl;
	cin>>a>>b;
	result=a/b;
	cout<<"a/b= "<<result;
	}
}
