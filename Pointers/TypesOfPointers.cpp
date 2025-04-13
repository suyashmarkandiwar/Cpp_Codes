#include <iostream>
using namespace std;

int main(){
    int *a;
    char *b;
    int *c;//wild pointer
    int *d=NULL;//Null pointer
    
    int arr[5]={1,2,3,4,5};
    int *ptr1 =  &arr[0];
    int *ptr2 = arr;

    int var=90;
    int *ptr3 = &var;
    int **ptr4 = &ptr3;
    
    //8 bytes for 64 bit
    //4 bytes for 32 bit
    cout<<sizeof(a)<< endl; 
    cout<<sizeof(b)<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;

    cout<<*ptr3<<endl;
    cout<<**ptr4<<endl;


    return 0;
}