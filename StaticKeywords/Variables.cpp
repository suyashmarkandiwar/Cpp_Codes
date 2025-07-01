#include <iostream>
using namespace std;
void fun(){
    static int x=0; //init statement - 1 run
    cout<<"x: "<< x << endl;
    x++;
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}

// What does static int x = 0; do?
// x is initialized only once — during the first call to fun().
// Its value is retained between function calls.
// It's not re-initialized to 0 every time like a normal local variable.