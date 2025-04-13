#include <iostream>
using namespace std;
int main(){
    int x = 90;
    int *y;

    y = &x; //storing address of x int pointer y
    
    cout<<x<<endl;
    cout<<*y<<endl;//prints the value of x using pointer y
    cout<<y<<endl;//prints the address stored in y pointer variable

    return 0;
}