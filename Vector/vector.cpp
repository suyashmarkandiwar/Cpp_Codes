#include <iostream>
using namespace std;

class Vector{
    public:

    void push_back(int a[], int s){
        int count;
        for(count=1; count<s; count++){
            cout <<"Enter element[" << count << "]: ";
            cin >> a[count];
        }

        if(count == s){
            int k = count;
            s *= 2;
            int *b;
            b = new int[s];

            for(int i=0; i<count; i++){
                b[i] = a[i];
            }
           
            delete[] a;
            a=b;

            for(count = k; count < s; count++) {  

            cout <<"Enter element[" << count << "]: ";
            cin >> a[count];
        }

        
        cout << "Number of elements: " << count <<endl;
        }
    }

};

int main(){
    int size = 10;
    
    int *a;
    a = new int[size];

    Vector v1;
    v1.push_back(a, size);


    return 0;
}