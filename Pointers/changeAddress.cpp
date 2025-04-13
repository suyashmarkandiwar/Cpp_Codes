#include <iostream>
using namespace std;

int main(){
    int a=99;
    int b=88;
    int *x=&a;//get thevalue at the address of a

    cout<<*x<<endl;
    x= &b;//get the value at the address of b(address changed value changed)
    cout<<*x<<endl;


    return 0;
}