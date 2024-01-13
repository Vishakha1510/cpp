#include<iostream>
using namespace std;
int main(){
	int num[]={0,1,2,3,4,5,6,7,8,9};
	int n=10;
	for(int i=0;i<n;i++)
	{
		if(num[i]%2==0)
		{
			cout<< num[i]<<" ";
		}
	}
	return 0;
}		



