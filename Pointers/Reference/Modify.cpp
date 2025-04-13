#include <iostream>
using namespace std;
int& getVal(int &a, int &b){
    return (a>b)?a:b;
}

int main(){
    int x=20, y=30;
    int &modify = getVal(x,y);
    modify=90;
    cout<<x<<" "<<y<<endl;
    return 0;
}