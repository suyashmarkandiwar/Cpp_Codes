#include <iostream>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<"Base class function"<<endl;
    }

};

class Derived : public Base{
    public:
    void display() override{
        cout<<"Derived Class function"<<endl;
    }

};


int main(){
    Base* BasePtr;
    Derived d1;
    BasePtr = &d1;
    
    BasePtr->display();

    return 0;
}