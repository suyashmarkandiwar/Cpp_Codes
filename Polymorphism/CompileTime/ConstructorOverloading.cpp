#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;

    Student(){
        cout<<"Non-parameterized\n";
    }

    Student(string name){
        this->name=name;
        cout<<"parameterized\n";
    }


};



int main(){
    Student s1("tommy");
    return 0;
}