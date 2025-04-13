// Global Function as Friend Function
#include <iostream>
using namespace std;
class base{
    private:
    int pri;
    protected:
    int pro;

    public:
    base(){
        pri = 32;
        pro = 99; 
    }

    friend void friendfunction(base& obj);

};

void friendfunction(base& obj){
    cout<<obj.pri<<endl;
    cout<<obj.pro<<endl;
}

int main(){
    base b1;
    friendfunction(b1);

    return 0;
}