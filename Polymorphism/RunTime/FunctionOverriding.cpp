#include <iostream>
using namespace std;
class Parent{
public: 
    virtual void getInfo(){
        cout<<"parent class\n";
    }

};

class Child : public Parent {
    public:
    void getInfo() override{
        cout<<"child class\n";
    }
};

int main(){
    Parent *c1;
    Child c2;
    c1=&c2;
    c1->getInfo();

    return 0;
}