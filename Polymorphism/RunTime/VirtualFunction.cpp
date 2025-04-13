#include <iostream>
using namespace std;
class Parent{
public: 
    void getInfo(){
        cout<<"parent class\n";
    }

    virtual void hello(){
        cout<<"hello form parent"<<endl;
    }

};

class Child : public Parent {
    public:
    void getInfo(){
        cout<<"child class\n";
    }

     void hello(){
        cout<<"hello form child"<<endl;
    }
};

int main(){
    Child c1;
    Parent c2;
    c1.hello();
    c2.hello();

    return 0;
}