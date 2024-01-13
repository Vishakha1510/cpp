#include<iostream>
using namespace std;
class cafe
{
	private:
		int cafe_id;
		string cafe_name;
	    static string cafe_type;
		int cafe_rating;
		string cafe_location;
		int cafe_establish_year;
		int cafe_staff_quantity;
	public:
	      cafe()
	      {
            cout << "ID: ";
            cin >> cafe_id;
            cout << "Name: ";
            cin >> cafe_name;
           // cout << "type: ";
            //cin >> cafe_type;
            cout << "rating: ";
            cin >> cafe_rating ;
            cout << "location: ";
            cin >> cafe_location;
            cout << "establish_year: ";
            cin >> cafe_establish_year;
            cout << "staff: ";
		    cin >> cafe_staff_quantity;
		  }
		  void display()
		  {
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

int main()
{
	int N;
		    cout << "N: ";
		    cin >> N;
		    cafe cafes[N];
		    for (int i = 0; i < N; ++i) {
             int id, rating, staff, establish_year;
              string name, location;

        
    }
    for (int i = 0; i < N; ++i) 
	{
        cout << "Details of cafe " << i + 1 << ":" << endl;
        cafes[i].display();
    }
	return 0;
		}		
