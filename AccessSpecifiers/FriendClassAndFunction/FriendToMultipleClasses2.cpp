#include <iostream>
using namespace std;

class ABC; // Forward declaration

class XYZ {
    int x;

public:
    void set_data(int a) {
         x = a;
     }

    // Declare friend function
    friend void max(XYZ& t1, ABC& t2);
};

class ABC {
    int y;

public:
    void set_data(int a) { 
        y = a; 
    }

    // Declare same friend function
    friend void max(XYZ& t1, ABC& t2);
};

// Pass by reference here 
void max(XYZ& t1, ABC& t2)
{
    if (t1.x > t2.y)
        cout << t1.x<<endl;
    else
        cout << t2.y<<endl;
}

int main()
{
    XYZ _xyz;
    ABC _abc;

    _xyz.set_data(20);
    _abc.set_data(35);

    max(_xyz, _abc);  // Same function call

    return 0;
}
