#include<iostream>
using namespace std;

class hotel{
	private:
		int n;
		int hotel_id;
		string hotel_name;
		static string hotel_type;
		int hotel_rating;
		static string hotel_location;
		int hotel_establish_year;
		int hotel_staff_quantity;
		int hotel_room_quantity;
		
		public:
		
			void sethotelinfo(int id, string name, int rating, int establish_year, int staff, int room){
		 hotel_id= id;
         hotel_name= name;
         hotel_rating= rating;
         hotel_establish_year= establish_year;
         hotel_staff_quantity= staff;
         hotel_room_quantity= room;
			}
			void displayhotelInfo() {
        cout << "hotel_name: " <<hotel_name  << endl;
        cout << "hotel_type: " <<hotel_type  << endl;
        cout << "hotel_rating: " << hotel_rating << endl;
        cout << "hotel_location: " <<hotel_location  << endl;
        cout << "hotel_establish_year: " <<hotel_establish_year  << endl;
        cout << "hotel_staff_quantity: " << hotel_staff_quantity << endl;
        cout << "hotel_room_quantity: " <<hotel_room_quantity  << endl;
    }
};
 string hotel::hotel_type="hotel";
 string hotel::hotel_location="ahmedabad";
	int main(){
		    int N;
		    cout << "N: ";
		    cin >> N;
		    hotel hotels[N];
		    for (int i = 0; i < N; ++i) {
            int id, rating, staff, room, establish_year;
            string name;

        cout << "Enter details for hotel " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "rating: ";
        cin >> rating ;
        cout << "establish_year: ";
        cin >> establish_year;
        cout << "staff: ";
		cin >> staff;
		cout << "room: ";
		cin >> room;

        hotels[i].sethotelinfo(id, name, rating, establish_year, staff, room);
    }
     
    for (int i = 0; i < N; ++i) 
	{
        cout << "Details of hotel " << i + 1 << ":" << endl;
        hotels[i].displayhotelInfo();
    }
return 0;
}
