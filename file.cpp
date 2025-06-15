#include <iostream>
using namespace std;
class A{
    public:
    int a,b;

    A(int c, int d){
        a=c;
        b=d;
    }

    A(){
        a=9;
        b=8;
    }

    int k(){
        return a*b;
    }

};

int main(){
    A a1;
    A a2(3,9);
    cout<<a1.k()<<endl;
    cout<<a2.k()<<endl;
    return 0;
}