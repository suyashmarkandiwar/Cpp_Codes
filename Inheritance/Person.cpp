#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name=name;
    //     this->age=age;

    // }

    Person(){}

    ~Person(){
        cout<<"I am blasting off\n";
    }


};

class Student : public Person{
public:
    int rollno;
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;


    }
    //name, age, rollno
    ~Student(){
        cout<<"Blasted\n";
    }

    };
int main(){
    Student s1;
    s1.name="rahul";
    s1.age=21;
    s1.rollno=1234;

    s1.getInfo();
    return 0;
}