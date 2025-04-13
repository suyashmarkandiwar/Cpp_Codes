#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int z = *x;
    *x=*y;
    *y=z;
}

int main(){
    int a=9, b=7;
    cout<<"Before Swap"<<endl;
    cout<<"a: "<<a<<" "<<"b: "<<b<<endl;

    swap(&a, &b);
    cout<<"After Swap"<<endl;
    cout<<"a: "<<a<<" "<<"b: "<<b<<endl;

    return 0;
}