#include<iostream>
using namespace std;
int main()
{
char c;
int a,b;

cout<<"enter operator: ";
cin>>c;
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;
		   switch(c)
		   {
		   case'+':
			   cout<<"addition is: "<<a+b;
			   break;
		   case'-':
			   cout<<"subtraction is: "<<a-b;
			   break;
		   case'*':
			   cout<<"multiplication is: "<<a*b;
			   break;
		   case'/':
			   cout<<"division is: "<<a/b;
			   break;
		   case'%':
		       cout<<"mod is: "<<a%b;
			   break;   
		   default:
			   printf("invalid input");
			   break;
		   }
return 0;
}
