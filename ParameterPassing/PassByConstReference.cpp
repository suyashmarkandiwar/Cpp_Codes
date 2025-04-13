#include <iostream>
using namespace std;

// Function that takes an integer by const reference
void printSquare(const int& num) {
    
    num=+3;// Can't modify num here
    cout << "Square of " << num << " is " << (num * num) << endl;
}

int main() {
    int number = 7;
    printSquare(number);  // Output: Square of 7 is 49
    return 0;
}
