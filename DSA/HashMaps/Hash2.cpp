/* Question: Implement a hash map using C++ STL.
   - Use string as key and int as value.
   - Perform operations like insert, erase, find, and iterate through the map.
   - Print the size of the map after each operation.
   - Use an iterator to traverse the map and print key-value pairs.
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Create an unordered_map (hash map)
    unordered_map<string, int> hashMap;

    // Insert key-value pairs
    hashMap["apple"] = 1;
    hashMap["banana"] = 2;
    hashMap["orange"] = 3;

    // Print the size of the map
    cout << "Size of map: " << hashMap.size() << endl;

    // Find and access elements
    cout << "Value associated with 'banana': " << hashMap["banana"] << endl;

    // Erase an element
    hashMap.erase("apple");
    cout << "Size of map after erasing 'apple': " << hashMap.size() << endl;

    // Iterate through the map
    cout << "Key-Value pairs in the map:" << endl;
    for (const auto& pair : hashMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}