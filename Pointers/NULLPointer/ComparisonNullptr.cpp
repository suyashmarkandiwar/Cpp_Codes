#include <iostream>
using namespace std;
int main(){
    nullptr_t n1, n2;
    if(n1<=n2)
    cout<<"n1"<<endl;
    else
    cout<<"n2"<<endl;

    char *x=n1;
    if(x==nullptr)
    cout<<"x is null"<<endl;
    else
    cout<<"x is not null"<<endl;

    return 0;
}