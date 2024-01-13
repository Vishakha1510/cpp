#include <iostream>
using namespace std;

class shape {
public:
    double radius;
    double height, breadth;
    double width, length;

    virtual double calculatearea() = 0;
};

class circle : public shape {
public:
    double calculatearea() {
        return radius * radius * 3.14;
    }
};

class triangle : public shape {
public:
    double calculatearea()  {
        return height * breadth * 0.5;
    }
};

class rectangle : public shape {
public:
    double calculatearea()  {
        return length * breadth;
    }
};

int main() {
    circle circle;
    triangle triangle;
    rectangle rectangle;

    cout << "Enter radius of circle: ";
    cin >> circle.radius;
    cout << "Area of circle is: " << circle.calculatearea() << endl;

    cout << "\nEnter height of triangle: ";
    cin >> triangle.height;
    cout << "Enter breadth of triangle: ";
    cin >> triangle.breadth;
    cout << "Area of triangle is: " << triangle.calculatearea() << endl;

    cout << "\nEnter length of rectangle: ";
    cin >> rectangle.length;
    cout << "Enter breadth of rectangle: ";
    cin >> rectangle.breadth;
    cout << "Area of rectangle is: " << rectangle.calculatearea() << endl;

}

