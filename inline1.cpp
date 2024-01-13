#include <iostream>
#include <string>
using namespace std;

class Student {
public: 
    int rollNo,num;
    string stdName,add;
    
};

int main()
{
    Student std1, std2;

    std1.rollNo = 1;
    std1.stdName = "Sam";
    std1.num = 910645321;
    std1.add="nikol";

    std2.rollNo = 2;
    std2.stdName = "John";
    std2.num = 986543306;
    std2.add="naroda";
    cout << "student 1.";
    cout << "\nStudent's Roll No.: " << std1.rollNo;
    cout << "\nStudent's Name: " << std1.stdName;
    cout << "\nStudent's Number: " << std1.num;
    cout << "\nStudent's Address: " << std1.add;


    cout << "\nstudent 2.";
    cout << "\nStudent's Roll No.: " << std2.rollNo;
    cout << "\nStudent's Name: " << std2.stdName;
    cout << "\nStudent's Number: " << std2.num;
    cout << "\nStudent's Address: " << std2.add;

 return 0;
}
