#include <iostream>
using namespace std;

class Car {
public:
    
    string brand;
    int year;

    void displayInfo() {
        cout << "Car Brand: " << brand << endl;
        cout << "Manufacturing Year: " << year << endl;
    }
};

int main() {
    Car car1;

    car1.brand = "Toyota";
    car1.year = 2022;
    
    car1.displayInfo();

    return 0;
}
