#include<iostream>
using namespace std;

class student{
	private:
		int stu_id;
		string stu_name;
		int stu_age;
		string stu_course;
		string stu_email;
		string stu_city;
		string stu_college;
		
		public:
			void setStudentinfo(int id, string name, int age, string course, string email, string city, string college){
		stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_course = course;
        stu_email = email;
        stu_city = city;
        stu_college = college;

			}
			void displayStudentInfo() {
        cout << "Student ID: " << stu_id << endl;
        cout << "Student Name: " << stu_name << endl;
        cout << "Student Age: " << stu_age << endl;
        cout << "Student Course: " << stu_course << endl;
        cout << "Student Email: " << stu_email << endl;
        cout << "Student City: " << stu_city << endl;
        cout << "Student College: " << stu_college << endl;
        cout << "---------------------------------" << endl;
    }
};
	int main(){
		    student students[5];
		    for (int i = 0; i < 5; ++i) {
            int id, age;
            string name, course, email, city, college;

        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Course: ";
        cin >> course;
        cout << "Email: ";
        cin >> email;
        cout << "City: ";
        cin >> city;
        cout << "College: ";
		cin >> college;

        students[i].setStudentinfo(id, name, age, course, email, city, college);
    }
     
    for (int i = 0; i < 5; ++i) 
	{
        cout << "Details of student " << i + 1 << ":" << endl;
        students[i].displayStudentInfo();
    }
return 0;
}
