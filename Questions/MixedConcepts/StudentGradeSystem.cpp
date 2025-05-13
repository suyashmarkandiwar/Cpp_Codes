#include <iostream>
using namespace std;
class Student{
    private:
    string Name;
    int RollNo;

    public:

    void input(){
        
        cout<<"Enter Name of Student: ";
        cin>>Name;
        cout<<"Enter RollNo of Student: ";
        cin>>RollNo;
        
    }

    string getName(){
        return Name;
    }

    int getRollNo(){
        return RollNo;
    }

    virtual void display() = 0;

};

class Marks : public Student{
    private:
    int Maths, Science, English;

    public:
    void setMarks(){
       
        cout<<"Enter Marks"<<endl;
        cout<<"Maths: ";
        cin>>Maths;
        cout<<"Science: ";
        cin>>Science;
        cout<<"English: ";
        cin>>English;
       
    }

    int getMaths(){
        return Maths;
    }

    int getScience(){
        return Science;
    }

    int getEnglish(){
        return English;
    }


};

class Result : public Marks{
    float avg;
    public:
    float Average(){
        avg=(getMaths()+getScience()+getEnglish())/3;
        return avg;
    }

    void display() override{
        cout<<"***********************************************************************************************************************"<<endl;
        cout<<"Name: "<<getName()<<endl;
        cout<<"RollNumber: "<<getRollNo()<<endl;
        cout<<"Marks"<<endl;
        cout<<"Maths: "<<getMaths()<<endl;
        cout<<"Science: "<<getScience()<<endl;
        cout<<"English: "<<getEnglish()<<endl;
        cout<<"Average: "<<Average()<<endl;

        if(Average()>=90 && Average()<=100){
            cout<<"A"<<endl;
        }
        else if(Average()>=75){
            cout<<"B"<<endl;
        }
        else if(Average()>=60){
            cout<<"C"<<endl;
        }
        else if(Average()<60){
            cout<<"D"<<endl;
            
        }
        else{
            cout<<"Invalid Input!!"<<endl;
        }

    }


};

int main(){
    Result r;
    r.input();
    r.setMarks();
    Student *s;
    s=&r;
    s->display();


    return 0;
}