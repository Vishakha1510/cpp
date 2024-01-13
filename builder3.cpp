#include <iostream>
#include <map>

using namespace std;

class Bank {
private:
    map<int, float> accounts;

public:
    void checkBalance(int accNum) {
        if (accounts.find(accNum) != accounts.end()) {
            cout << "Balance for account " << accNum << " is: $" << accounts[accNum] << endl;
        } else {
            cout << "Account not found." << endl;
        }
    }

    void deposit(int accNum, float amount) {
        if (accounts.find(accNum) != accounts.end()) {
            accounts[accNum] += amount;
            cout << "$" << amount << " deposited to account " << accNum << " successfully." << endl;
        } else {
            cout << "Account not found." << endl;
        }
    }

    void withdraw(int accNum, float amount) {
        if (accounts.find(accNum) != accounts.end()) {
            if (accounts[accNum] >= amount) {
                accounts[accNum] -= amount;
                cout << "$" << amount << " withdrawn from account " << accNum << " successfully." << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Account not found." << endl;
        }
    }

    void closeAccount(int accNum) {
        if (accounts.find(accNum) != accounts.end()) {
            accounts.erase(accNum);
            cout << "Account " << accNum << " closed successfully." << endl;
        } else {
            cout << "Account not found." << endl;
        }
    }

    void addAccount(int accNum, float balance) {
        accounts.insert(pair<int, float>(accNum, balance));
    }
};

int main() {
cout<<"         -: BANK MANAGEMENT SYSTEM :-        "<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"\n         -: Designed N programed By :-       "<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"               KHUSHI G BEIADIYA               "<<endl;
cout<<"\n\n                -: Trainer :-               "<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"                ASHISH SOLANKI                 "<<endl;
cout <<"\nPress any key to clear the console screen...\n";
getchar();
system("cls");
    Bank bank;
    bank.addAccount(1001, 500);
    bank.addAccount(1002, 1000);

    int choice, accNum;
    float amount;

    while (true) {
        cout << "Bank Management System Menu" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Close Account" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter account number: ";
                cin >> accNum;
                bank.checkBalance(accNum);
                break;
            case 2:
                cout << "Enter account number: ";
                cin >> accNum;
                cout << "Enter amount to deposit: $";
                cin >> amount;
                bank.deposit(accNum, amount);
                break;
            case 3:
                cout << "Enter account number: ";
                cin >> accNum;
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                bank.withdraw(accNum, amount);
                break;
            case 4:
                cout << "Enter account number to close: ";
                cin >> accNum;
                bank.closeAccount(accNum);
                break;
            case 5:
                cout << "Exiting the program" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}


