#include <iostream>
using namespace std;
class Circle{
    private:
    double radius;

    public:
    double getter(){
        return radius;
    }

    void setter(double val){
        radius = val; //Accessing private member of the class 
    }

    double area(){
        return 3.14*radius*radius;
    }

};

int main(){
    Circle c1;
    c1.setter(5);
    cout<<"Radius: "<<c1.getter()<<endl;
    cout<<"Area: "<<c1.area()<<endl;
    return 0;
}