#include <iostream>
using namespace std;
class A{
    int real, imag;
    public:
    A(int r, int i){
        real = r;
        imag = i;
    }

    int getReal(){
        return real;
    }

    int getImag(){
        return imag;
    }

    A operator+(const A & obj){
        return A(real + obj.real, imag + obj.imag);
    }

};

int main(){
    A c1(7,8), c2(5,8);
    A c3 = c1 + c2;
    
    cout<<c3.getReal()<<" + "<<c3.getImag()<<"i"<<endl;

    return 0;
}