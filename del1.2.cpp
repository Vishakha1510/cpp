#include<iostream>
using namespace std;

class customer{
	private:
		int cust_id;
		string cust_name;
		int cust_age;
		string cust_brand;
		int cust_mobile_number;
		string cust_city;
		int cust_year;
		
		public:
			void setCoustomerinfo(int id, string name, int age, string brand, int number, string city, int year){
		cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_brand = brand;
        cust_mobile_number = number;
        cust_city = city;
        cust_year = year;

			}
			void displayCustomerInfo() {
        cout << "customer ID: " << cust_id << endl;
        cout << "customer Name: " << cust_name << endl;
        cout << "customer Age: " << cust_age << endl;
        cout << "customer brand: " << cust_brand << endl;
        cout << "customer number: " << cust_mobile_number << endl;
        cout << "customer City: " << cust_city << endl;
        cout << "customer year: " << cust_year << endl;
    }
};
	int main(){
		    customer customers[5];
		    for (int i = 0; i < 5; ++i) {
            int id, age,number,year;
            string name, brand, city;

        cout << "Enter details for customer " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "brand: ";
        cin >> brand;
        cout << "mobile_number: ";
        cin >> number;
        cout << "City: ";
        cin >> city;
        cout << "year: ";
		cin >> year;	
        customers[i].setCoustomerinfo(id, name, age, brand, number, city, year);
    }
    for (int i = 0; i < 5; ++i) {
        cout << "Details of customer " << i + 1 << ":" << endl;
        customers[i].displayCustomerInfo();
 }
return 0;
}
