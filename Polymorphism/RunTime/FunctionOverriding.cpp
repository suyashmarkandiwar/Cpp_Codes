#include <iostream>
using namespace std;
class Parent{
public: 
    void getInfo(){
        cout<<"parent class\n";
    }

};

class Child : public Parent {
    public:
    void getInfo(){
        cout<<"child class\n";
    }
};

int main(){
    Parent c1;
    c1.getInfo();

    return 0;
}