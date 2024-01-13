#include <iostream>
using namespace std;
class Shape
{
protected:
	double width, height;
public:
	void set_data (double w, double h)
	{
		width = w;
		height = h;
	}
};

class Rectangle: public Shape
{
public:
	double area ()
	{
		return (width * height);
	}
};

class Triangle: public Shape
{
public:
	double area ()
	{
		return (width * height / 2);
	}
};

int main (){

	Rectangle rect;
	Triangle tri;
	rect.set_data (5,3);
	tri.set_data (2,5);
	cout << "Area of rectangle: "<<rect.area() << endl;
	cout << "Area of triangle: "<<tri.area() << endl;
	return 0;
}
