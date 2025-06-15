#include <iostream>
using namespace std;

class Time24 {
    int hrs, min, sec;

public:
    bool setTime(int h, int m, int s) {
        if (h < 0 || m < 0 || s < 0) {
            cout << "Invalid Input! Negative values not allowed.\n";
            return false;
        }

        // Normalize seconds → minutes
        m += s / 60;
        s %= 60;

        // Normalize minutes → hours
        h += m / 60;
        m %= 60;

        this->hrs = h;
        this->min = m;
        this->sec = s;

        cout << "\nUser Entered 24Hr Format Time (adjusted): ";
        printf("%02d:%02d:%02d\n", hrs, min, sec);
        return true;
    }

    friend class Time12; // For direct access in operator=
};

class Time12 {
    int hrs, min, sec;
    string period;

public:
    // Overload = operator to convert from Time24 to Time12
    Time12& operator=(const Time24& t) {
        int totalHours = t.hrs % 24;
        min = t.min;
        sec = t.sec;

        // Determine AM/PM and convert hours
        if (totalHours == 0) {
            hrs = 12;
            period = "AM";
        } else if (totalHours == 12) {
            hrs = 12;
            period = "PM";
        } else if (totalHours > 12) {
            hrs = totalHours - 12;
            period = "PM";
        } else {
            hrs = totalHours;
            period = "AM";
        }

        return *this;
    }

    void display() const {
        cout << "Converted 12Hr Format Time: ";
        printf("%02d:%02d:%02d %s\n", hrs, min, sec, period.c_str());
    }
};

int main() {
    Time24 t1;
    Time12 t2;
    int h, m, s;

    cout << "Enter Time (Can be Overflow Values):\n";
    cout << "Hours: ";
    cin >> h;
    cout << "Minutes: ";
    cin >> m;
    cout << "Seconds: ";
    cin >> s;

    if (t1.setTime(h, m, s)) {
        t2 = t1;       // Assignment using overloaded '=' operator
        t2.display();  // Display 12-hour format
    }

    return 0;
}
