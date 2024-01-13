#include <iostream>
#include <string>
using namespace std;
class Animal
{
	protected:
	 string name;
	 int age;
	 string place_of_origin;
	public:
	 void set_value (int a, string n, string p)
	 {
		age = a;
		name = n;
		place_of_origin=p;
	 }
};

class Zebra:public Animal
{
public:
void displayZebraMessage()
{
cout<< "The zebra name is: "<<name<<endl;
cout<<"\nThe zebra age is: "<<age<<endl;
cout<<"\nzebra place of origin is: "<<place_of_origin<<endl;
}
};
class Dolphin: public Animal
{
public:
void displayDolphinMessage()
{
cout<<"\nThe dolphin name is: "<<name<<endl;
cout<<"\nThe dolphin age is: "<<age<<endl;
cout<<"\ndolphin place of origin is: "<<place_of_origin<<endl;
}
};
int main ()
{	
	Zebra zebra;
	Dolphin dolphin;
	string n1="zebra";
	string n2="dolphin";
	string n3="africa";
	string n4="india";
	zebra.set_value (10,n1,n3);
	dolphin.set_value (9,n2,n4);

	zebra.displayZebraMessage() ;
	dolphin.displayDolphinMessage() ;
	return 0;
}
