#include <iostream>
#include <string>
using namespace std;

class Course {
    string courseN;
    int duration;

public:
    // Constructor with default duration value of 10
    Course(string name, int d = 10) {
        courseN = name;
        duration = d;
    }

    string getName() {
        return courseN;
    }

    int getDur() {
        return duration;
    }

    virtual void showDetails() = 0;  // Pure virtual function
};

class VideoCourse : public Course {
    int videoCount;

public:
    // Constructor with default video count of 5
    VideoCourse(string name, int d = 10, int vc = 5) : Course(name, d) {
        videoCount = vc;
    }

    void showDetails() override {
        cout << "Name: " << getName() << endl;
        cout << "Duration: " << getDur() << " hours" << endl;
        cout << "Type: Video Course" << endl;
        cout << "Video Count: " << videoCount << endl;
    }
};

class TextCourse : public Course {
    int pageCount;

public:
    // Constructor with default page count of 9
    TextCourse(string name, int d = 10, int pc = 9) : Course(name, d) {
        pageCount = pc;
    }

    void showDetails() override {
        cout << "Name: " << getName() << endl;
        cout << "Duration: " << getDur() << " hours" << endl;
        cout << "Type: Text Course" << endl;
        cout << "Page Count: " << pageCount << endl;
    }
};

int main() {
    string name;
    int duration, count;

    cout << "Enter course Name: ";
    getline(cin, name);

    cout << "Enter Duration (in hours) (Press enter to use default 10): ";
    cin >> duration;
    if (duration <= 0) {  // Check if user didn't enter a valid duration
        duration = 10;  // Default to 10 if no valid input
    }

    cout << "Enter Count (videos/pages) (Press enter to use default 5/9): ";
    cin >> count;
    if (count <= 0) {  // Check if user didn't enter a valid count
        count = (duration == 10) ? 5 : 9;  // Set to default based on course type
    }

    // Creating VideoCourse and TextCourse objects
    VideoCourse v1(name, duration, count);
    TextCourse t1(name, duration, count);

    Course* c1;

    // Show details of VideoCourse
    c1 = &v1;
    c1->showDetails();

    cout << "-----------------------------\n";

    // Show details of TextCourse
    c1 = &t1;
    c1->showDetails();

    return 0;
}
