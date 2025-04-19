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
        cout<<name<<endl;
        cout<<"parameterized\n";
    }


};



int main(){
    Student s1("tommy");
    Student s2;
    return 0;
}