#include <iostream>
using namespace std;

class Student {
private:
    int marks;
protected:
    char grade;

public:
    void setData(int m) {
        if (m > 100) {
            cout << "Beyond out of marks" << endl;
            marks = 0;
            grade = '-';
            return;
        }

        marks = m;

        if (marks >= 90)
            grade = 'A';
        else if (marks >= 75)
            grade = 'B';
        else if (marks >= 55)
            grade = 'C';
        else
            grade = 'D';
    }

    void display() {
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s1;
    s1.setData(888);
    s1.display();

    return 0;
}
