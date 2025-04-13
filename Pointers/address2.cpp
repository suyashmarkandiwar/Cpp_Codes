#include <iostream>
using namespace std;
int main(){
    int y =8;
    int &a=y;

    y=99;
    cout<<y<<endl;
    cout<<a<<endl;
    return 0;
}