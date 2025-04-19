#include <iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"A class"<<endl;
    }
};

class B : public A{
    public: 
    void display(){
        cout<<"Bclass"<<endl;

        
    }

};

int main(){
    B b1;
    b1.A::display();
    b1.display();
    
    return 0;
}