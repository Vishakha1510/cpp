#include <iostream>
using namespace std;
class Calculator {
    public:
    int calculate(int a, int b) {
    return a / b;
    }
    int calculate(int a, int b, int c) {
    return a - b - c;
    }
    int calculate(int a, int b, int c, int d) {
    return a * b * c * d;
    }
    int calculate(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
    }
};
int main() {
    Calculator Calc;
    int divisionResult = Calc.calculate(100, 5);
    cout << "A/B: " << divisionResult << endl;
    int subtractionResult = Calc.calculate(50, 20, 6);
    cout << "A-B-C: " << subtractionResult << endl;
    int multiplicationResult = Calc.calculate(1, 2, 3, 4);
    cout << "A*B*C*D: " << multiplicationResult << endl;
    int additionResult = Calc.calculate(100, 1, 2, 3, 4);
    cout << "A+B+C+D+E: " << additionResult << endl;
    return 0;
}

