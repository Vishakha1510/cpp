#include<iostream>
using namespace std;

class cafe{
	private:
		int cafe_id;
		string cafe_name;
		static string cafe_type;
		int cafe_rating;
		string cafe_location;
		int cafe_establish_year;
		int cafe_staff_quantity;
		
		public:
		
			void setcafeinfo(){
		 cafe_id= id;
         cafe_name= name;
         cafe_rating= rating;
         cafe_location= location;
         cafe_establish_year= establish_year;
         cafe_staff_quantity= staff;
			}
			void displaycafeInfo() {
		cout << "cafe_id: " <<cafe_id  << endl;		
        cout << "cafe_name: " <<cafe_name  << endl;
        cout << "cafe_type: " <<cafe_type  << endl;
        cout << "cafe_rating: " <<cafe_rating  << endl;
        cout << "cafe_location: " <<cafe_location  << endl;
        cout << "cafe_establish_year: " <<cafe_establish_year  << endl;
        cout << "cafe_staff_quantity: " <<cafe_staff_quantity << endl;
    }
};
 string cafe::cafe_type="fast food cafe";
	int main(){
		    int N;
		    cout << "N: ";
		    cin >> N;
		    cafe cafes[N];
		    for (int i = 0; i < N; ++i) {
            int id, rating, staff, establish_year;
            string name, location;

        cout << "Enter details for cafe " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "rating: ";
        cin >> rating ;
        cout << "location: ";
        cin >> location;
        cout << "establish_year: ";
        cin >> establish_year;
        cout << "staff: ";
		cin >> staff;
		cafes[i].setcafeinfo(id,name,rating,establish_year,location,staff);
    }
    for (int i = 0; i < N; ++i) 
	{
        cout << "Details of cafe " << i + 1 << ":" << endl;
        cafes[i].displaycafeInfo();
    }
return 0;
}
