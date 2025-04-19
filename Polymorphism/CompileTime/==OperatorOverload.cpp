#include <iostream>
using namespace std;
class Compare{
    private:
    int a,b;
    public:
    Compare(int x, int y){
        a=x;
        b=y;
    }

    bool operator==(const Compare &p){
        return (a == p.a && b == p.b);
    }



};

int main(){
    Compare c1(8,9);
    Compare c2(7,4);
    Compare c3(7,9);

    if(c1 == c2){
        cout<<"c1 and c2 equal"<<endl;
    }else{
        cout<<"c1 and c2 not equal"<<endl;
    }

    if(c1 == c3){
        cout<<"c1 and c3 equal"<<endl;
    }else{
        cout<<"c1 and c3 not equal"<<endl;
    }

    return 0;
}