#include <iostream>
using namespace std;

class Temp {

public:
    
    virtual void display() = 0; // pure virtual
};

class Fahrenheit : public Temp {
    float f;
public:

    Fahrenheit(int c) {
        f = c * 9 / 5 + 32;
    }

    void display() override {
        cout << "Fahrenheit: " << f << "°F" << endl;
    }
};

class Kelvin : public Temp {
    float k;
public:
    
    Kelvin(int c) {
        k = c + 273.15;
    }

    void display() override {
        cout << "Kelvin: " << k << " K" << endl;
    }
};

int main() {
    Temp* t;
    int celsius;
    cout<<"Temperature in Celsius: ";
    cin>>celsius;
    Fahrenheit f(celsius);
    Kelvin k(celsius);

    t = &f;
    t->display();
    t=&k;
    t->display();


    return 0;
}
