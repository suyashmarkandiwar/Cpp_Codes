#include <iostream>
#include <string>

using namespace std;

int main() {
  string myString;

  cout << "Enter your input: \n";
  // Input: Codeacademy is awesome
  getline(cin, myString);

  cout << myString << "!";
  // Output: Codeacademy is awesome!
}
