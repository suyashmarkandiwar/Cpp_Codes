#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        this->name=name;
        this->age=age;

    }

    

    ~Person(){
        cout<<"I am blasting off\n";
    }


};

class Student : private Person{ //Inherits from Person, but Person's members become private in Student
    
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){  
        //: Person(name, age)
        // This is the constructor initializer list, which is:
        // Calling the Person constructor with name and age.
        // It's necessary because Person has a parameterized constructor and no default one.
    this-> rollno = rollno;
    }
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
    Student s1("rahul",21,1234);
    
    s1.getInfo();
    cout<<s1.name;
    return 0;
}