#include <iostream>
using namespace std;
class X {
protected:
    int a, b, c;

public:
    void setData(int a_val, int b_val, int c_val) {
        a = a_val;
        b = b_val;
        c = c_val;
    }
};

class Y : public X {
public:
    int getCubeSum() {
        return (a * a * a) + (b * b * b) + (c * c * c);
    }

    void getData() {
        cout << "Values are: a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

int main() {
    Y obj;
    obj.setData(1, 2, 3);
    obj.getData();
    cout << "Sum of cubes: " << obj.getCubeSum() << endl;
    return 0;
}
