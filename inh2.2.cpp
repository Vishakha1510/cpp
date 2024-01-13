#include <iostream>
using namespace std;
class RBI {
protected:
    float rate;

public:
    RBI(float r) : rate(r) {}

    float getROI() {
        return rate;
    }
};

class SBI : public RBI {
public:
    SBI(float r) : RBI(r) {}
};

class BOB : public RBI {
public:
    BOB(float r) : RBI(r) {}
};

class ICICI : public RBI {
public:
    ICICI(float r) : RBI(r) {}
};

int main() {
    SBI sbi(5.7); 
    BOB bob(4.0); 
    ICICI icici(6.3); 

    std::cout << "SBI Rate of Interest: " << sbi.getROI() << "%" << std::endl;
    std::cout << "BOB Rate of Interest: " << bob.getROI() << "%" << std::endl;
    std::cout << "ICICI Rate of Interest: " << icici.getROI() << "%" << std::endl;

    return 0;
}

