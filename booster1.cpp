#include<iostream>
#include<math.h>
using namespace std;
int main()
{
		float p,t,r,ci;
		cout<<"principal value= ";
		cin>>p;
		cout<<"time= ";
		cin>>t;
		cout<<"rate= ";
		cin>>r;
		ci=p*pow((1+ r/100),t)-p;
		cout<<"compound interest is: "<<ci;
	return 0;
}
