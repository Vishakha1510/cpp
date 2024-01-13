#include<iostream>
using namespace std;
class A
{
    public:
	int w,x;
};
class B : public A
{
	public:
	B()
	{
	w=1;
	x=1;
	}    	
};
class C
{
    public:
    int y,z;
	C()
	{
	y=1;
	z=1;
	}	
};
class D : public B, public C
{
	public:
		void sum()
		{
			cout << "sum= " <<w+x+y+z<<endl;
		}
};
int main()
{
	D d;
	d.sum();
	return 0;
}

