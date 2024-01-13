#include <iostream>
using namespace std;

class P {
protected:
    float temperature;

public:
    void setTemperature(float temp) {
        temperature = temp;
    }
};

class Q : public P {
public:
    float toFahrenheit() {
        return (temperature * 9.0 / 5.0) + 32; 
    }
};

class R : public Q {
public:
    float toKelvin() {
        float fahrenheit = toFahrenheit();
        return (fahrenheit - 32) * 5.0 / 9.0 + 273.15; 
    }
};

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    R obj;
    obj.setTemperature(celsius);

    float fahrenheit = obj.toFahrenheit();
    float kelvin = obj.toKelvin();

    cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    cout << "Temperature in Kelvin: " << kelvin << " K" << endl;

    return 0;
}

