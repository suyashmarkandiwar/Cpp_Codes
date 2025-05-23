#include <iostream>
using namespace std;

class Account {
protected:
    string accHolder;
    int accNum;
    float balance;

public:
    Account(string name, int number) {
        accHolder = name;
        accNum = number;
        balance = 3000; // default balance
    }

    string getHolder() {
        return accHolder;
    }

    int getNum() {
        return accNum;
    }

    float getBal() {
        return balance;
    }

    void setBal(float b) {
        balance = b;
    }

    void deposit(float amount) {
        balance += amount;
    }

    virtual void display() = 0; // abstract method
};

// ---------- Savings Account ----------
class SavingsAccount : public Account {
public:
    SavingsAccount(string name, int num) : Account(name, num) {}

    void display() override {
        float interest = balance * 0.05;
        balance += interest;
        cout << "\n[ Savings Account ]" << endl;
        cout << "Name: " << accHolder << endl;
        cout << "Account Number: " << accNum << endl;
        cout << "Balance with Interest: ₹" << balance << endl;
    }
};

// ---------- Current Account ----------
class CurrentAccount : public Account {
    float overdraft = 500;

public:
    CurrentAccount(string name, int num) : Account(name, num) {}

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        } else if (amount - balance <= overdraft) {
            cout << "Overdraft used: ₹" << amount - balance << endl;
            balance = 0;
        } else {
            cout << "❌ Overdraft limit exceeded!" << endl;
        }
    }

    void display() override {
        cout << "\n[ Current Account ]" << endl;
        cout << "Name: " << accHolder << endl;
        cout << "Account Number: " << accNum << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};

// ---------- Main Function ----------
int main() {
    string name;
    int number;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Account Number: ";
    cin >> number;

    // You can choose either type to test
    SavingsAccount s(name, number);
    CurrentAccount c(name, number);

    Account* a;

    // Test Savings
    a = &s;
    s.deposit(1000);  // add money
    a->display();

    // Test Current
    a = &c;
    c.withdraw(3200); // test overdraft
    a->display();

    return 0;
}
