#include <iostream>
using namespace std;
class access{
    private:
    int pri;
    protected:
    int pro;

    public:
    access(){
        pri= 88;
        pro = 822;
    }

    friend class F;

};

class F{
    public:
    void display(access& t){
        cout<<t.pri<<endl;
        cout<<t.pro<<endl;
    }
};

int main(){
    access A;
    F t;
    t.display(A);

    return 0;
}