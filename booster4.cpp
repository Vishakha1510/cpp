#include<iostream>
using namespace std;
int main()
{
		int i,j;
		cout<<"i is: ";
		cin>>i;
		cout<<"j is: ";
		cin>>j;
		i=i+j;
		j=i-j;
		i=i-j;
		cout<<"after swapping: i:"<<i<<",j:"<<j;
	return 0;
}
