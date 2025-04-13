//Safe, original stays unchanged
#include <iostream>
using namespace std;

void doubleValue(int x) {
    x = x * 2;
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 10;
    doubleValue(num);
    cout << "Outside function: " << num << endl;  // Still 10
    return 0;
}
