// Member Function of Another Class as Friend Function
#include <iostream>
using namespace std;
class base;

class another{
    public:
    void memberfunc(base& t);
};

class base{
    private:
    int pri;
    protected:
    int pro;

    public:
    base(){
        pri = 99;
        pro = 83;
    }

    friend void another::memberfunc(base&);
};

void another::memberfunc(base& t){
    cout<<t.pri<<endl;
    cout<<t.pro<<endl;
}

int main(){
    base obj1;
    another obj2;
    obj2.memberfunc(obj1);

    return 0;
}