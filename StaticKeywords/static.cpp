#include <iostream>
using namespace std;
class ABC{
public:
    ABC(){
        cout<< "constructor\n";
    }

    ~ABC(){
        cout<<"destructor\n";
    }
};

int main(){
    if(true) {
        static ABC obj;
    }

    cout<< "end of main fnx\n";
    return 0;
}