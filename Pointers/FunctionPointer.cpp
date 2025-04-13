#include <iostream>
using namespace std;
int multiply(int a, int b){
    return a*b;
}

int main(){
    int (*func)(int, int);
    func = multiply;
    int product = func(3, 4);
    cout<<product<<endl;

    return 0;
}