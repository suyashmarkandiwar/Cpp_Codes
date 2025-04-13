#include <iostream>

using namespace std;
 
class Teacher{
    private:
    double salary;
    public:
    
    //properties
    string name;
    string dept;
    string subj;

    Teacher(){
        cout<<"Hello I am contructor\n";
        dept="Computer Science";
    }
    
    //setter function
    void setSalary(double s){
        salary = s;
    }

    //getter funtion
    double getSalary(){
        return salary;
    }
    //methods (or) member functions
    void changeDept( string newDept){
        dept = newDept;
    }
};

class Account{
    private:
    double balance;
    string password; //data hiding

    public:
    string owner;
    string Job;
};

int main(){
    Teacher t1;
    t1.name="Suresh";
    t1.subj="C++";
    
    t1.setSalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    cout<<t1.dept<<endl;
    

    return 0;
}