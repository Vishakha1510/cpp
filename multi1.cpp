#include <iostream>
#include <string>
using namespace std;

class Message {
private:
    string internalMessage;

public:
    Message(const string& msg = "") : internalMessage(msg) {}

    void print() const {
        cout << "Internal Message: " << internalMessage << endl;
    }

    void print(const string& additionalMsg) const {
        cout << "Internal Message: " << internalMessage << endl;
        cout << "Additional Message: " << additionalMsg << endl;
    }
};

int main()
 {
    Message msg1("Hello");
    Message msg2("world");

    msg1.print();  
    msg2.print("hy"); 
    
    return 0;
}

