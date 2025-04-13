#include <iostream>
using namespace std;

const int b = 5;
const int a = 9;
int multiply(){
    return a*b;
}

void print(int (*funcptr)()){
    cout<<funcptr()<<endl;

}

int main(){
    print(multiply);
    return 0;
}