#include <iostream>
#include <string>
using namespace std;

class Person {
    
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int rollno;
};

class Teacher : public Person{
public:
    string subject;

};
int main(){
   Teacher t1;
   t1.age=23;
   cout<<t1.age<<endl;
    
    return 0;
}