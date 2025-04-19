#include <iostream>
using namespace std;

class A{
    int x;
    public:
    
    A(int val){
        x = val;
    }

    A(A& t){
        x = t.x;
    }

    int get(){
        return x;
    }
};

int main(){
    A a1(29);
    A a2(a1);

    cout<<a2.get()<<endl;
    return 0;
}