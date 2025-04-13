//Changes original variable
#include <iostream>
using namespace std;

void doubleValue(int& x) {
    x = x * 2;
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 10;
    doubleValue(num);
    cout << "Outside function: " << num << endl;  // Now 20
    return 0;
}
