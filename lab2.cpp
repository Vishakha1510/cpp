#include<iostream>
using namespace std;
int main()
{
char str[10];
int i;
cout<<"enter string: ";
cin>>str;
		   for(i=0;i<5;i++)
		   {
		      if(str[i]>=65 && str[i]<=90)
		      {
		      	str[i]=str[i]+32;
			cout<<"after toggle: "<<str;
		      }
			else
			{
			 if(str[i]>=91 && str[i]<=122)
			 {
			 	str[i]=str[i]-32;
			  cout<<"after toggle: "<<str;
			 }
			}
		   }     
return 0;
}
