#include<iostream>
#include<string>
using namespace std;

const string user = "vishakha";
const string pass = "15377";

struct Item {
    int itemnumber;
    string itemname;
    int quantity;
    double price;
    double discount;
};

class supermarketbillingsystem {
private:
    Item items[20];
    int currentItemindex;

public:
    supermarketbillingsystem() : currentItemindex(0) {}

    bool verifycredentials() {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        return (username == user && password == pass);
    }

    void addItem() {
        if (currentItemindex < 20) {
            Item newItem;
            cout << "Enter item number: ";
            cin >> newItem.itemnumber;
            cout << "Enter item name: ";
            cin.ignore();
            getline(cin, newItem.itemname);
            cout << "Enter quantity: ";
            cin >> newItem.quantity;
            cout << "Enter price: ";
            cin >> newItem.price;
            cout << "Enter discount: ";
            cin >> newItem.discount;

            items[currentItemindex++] = newItem;

            cout << "Item added successfully!\n";
        }
        else {
            cout << "Maximum number of items is 20 only!\n";
        }
    }

    void displayInvoice() {
        double totalamount = 0;
        cout << "Item number\tItem name\tQuantity\tPrice\tDiscount\tTotal\n";

        for (int i = 0; i < currentItemindex; i++) {
            double itemtotal = items[i].quantity * (items[i].price - items[i].discount);
            totalamount += itemtotal;

            cout << items[i].itemnumber << "\t\t"
                << items[i].itemname << "\t\t"
                << items[i].quantity << "\t\t"
                << items[i].price << "\t\t"
                << items[i].discount << "\t\t"
                << itemtotal << endl;
        }

        double totalDiscount = 0;
        for (int i = 0; i < currentItemindex; i++) {
            totalDiscount += (items[i].discount * items[i].quantity);
        }

        totalamount -= totalDiscount;

        cout << "\nTotal amount after discount: " << totalamount << endl;
    }
};

int main() {
    supermarketbillingsystem billingsystem;
    if (billingsystem.verifycredentials()) {
        int choice;
        do {
            cout << "\n1. Add items\n";
            cout << "2. Display invoice\n";
            cout << "3. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
            case 1:
                billingsystem.addItem();
                break;
            case 2:
                billingsystem.displayInvoice();
                break;
            case 3:
                cout << "Exit billing.\n";
                break;
            default:
                cout << "Invalid choice.\n";
            }
        } while (choice != 3);
    }
    else {
        cout << "Invalid username or password.\n";
    }
    return 0;
}

