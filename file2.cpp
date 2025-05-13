#include <iostream>
#include <iomanip>
using namespace std;

class Time12; // Forward declaration

class Time24 {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time24(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Conversion operator to Time12
    operator Time12() const;

    void inputTime() {
        do {
            cout << "Enter hours (0-23): ";
            cin >> hours;
        } while (hours < 0 || hours > 23);

        do {
            cout << "Enter minutes (0-59): ";
            cin >> minutes;
        } while (minutes < 0 || minutes > 59);

        do {
            cout << "Enter seconds (0-59): ";
            cin >> seconds;
        } while (seconds < 0 || seconds > 59);
    }

    // Getters (optional)
    int getHours() const { return hours; }
    int getMinutes() const { return minutes; }
    int getSeconds() const { return seconds; }
};

class Time12 {
private:
    int hours;
    int minutes;
    string period; // "AM" or "PM"
public:
    Time12(int h = 0, int m = 0, string p = "AM") : hours(h), minutes(m), period(p) {}

    void display() const {
        cout << "Converted Time: "
             << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << " " << period << endl;
    }

    friend class Time24;
};

Time24::operator Time12() const {
    int h = hours;
    int m = minutes;
    int s = seconds;

    // Round minutes based on seconds
    if (s > 30) m++;

    // Handle overflow
    if (m >= 60) {
        m -= 60;
        h++;
    }
    if (h >= 24) h -= 24;

    string period = (h < 12) ? "AM" : "PM";
    h = h % 12;
    if (h == 0) h = 12;

    return Time12(h, m, period);
}

int main() {
    Time24 t1;
    t1.inputTime();

    Time12 t12 = t1; // Implicit conversion
    t12.display();

    return 0;
}
