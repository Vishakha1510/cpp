#include<iostream>
using namespace std;
class comp{
	private:
		int comp_id;
		string comp_name;
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
	    string comp_ceo;
		
		public:
			void setcompInfo(int id,string name,int staff,int revenue,int raw,int diamond,string ceo){
			
			comp_id= id;
			comp_name= name;
			comp_staff_quantity=staff;
			comp_revenue=revenue;
			comp_import_raw_diamonds=raw;
			comp_export_diamonds=diamond;
			comp_ceo=ceo;		
			}
			void displaycompInfo(){
			 cout << "Comp ID: " << comp_id << endl;
			 cout << "Comp name: " << comp_name << endl;
		     cout << "Comp staff: " << comp_staff_quantity << endl;
		     cout << "Comp revenue: " << comp_revenue << endl;
			 cout << "Comp import raw diamonds: " << comp_import_raw_diamonds << endl;
			 cout << "Comp export diamonds:" << comp_export_diamonds << endl;
			 cout << "Comp ceo: " << comp_ceo << endl;
			}

};
	int main(){
		int n;
		cin>>n;
		comp comps[n];
		
		for (int i = 0; i < n; ++i){
			int id,staff, revenue, raw, diamonds;
			string name, ceo;
			
			        cout << "Enter details for comp " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "staff: ";
        cin >> staff;
        cout << "Revenue: ";
        cin >> revenue;
        cout << "import raw diamonds: ";
        cin >> raw;
        cout << "export diamonds: ";
		cin >> diamonds;
		cout << "ceo: ";
		cin >> ceo;
		
		comps[i].setcompInfo(id,name,staff,revenue,raw,diamonds,ceo);				
		}
		 cout << "\nDisplaying Information of n comp:" << endl;
		 for (int i = 0; i < n; ++i) {
        cout << "Details of comp " << i + 1 << ":" << endl;
        comps[i].displaycompInfo();
    }

    return 0;

	}
