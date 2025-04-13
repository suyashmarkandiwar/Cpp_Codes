#include <iostream>
using namespace std;
class id{
    protected:
    int ID;
    };

//Accessing protected members of the class
class tom : public id{
    public:
    void setId(int val){
        ID = val;
    }

    int getId(){
        return ID;
    }

};

int main(){
    tom k;
    k.setId(45);
    cout<<"ID: "<<k.getId()<<endl;

    return 0;
}
