#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main(){
        //creation
        map<string, int> m;

        //Types by which we can insert

        //1
        pair<string, int> p = make_pair("babbar", 3);
        m.insert(p);

        //2
        pair<string, int> pair2("love",4);
        m.insert(pair2);

        //3
        m["mera"] = 1;
        m["mera"] = 2;

        //Search
        cout << m["babbar"] << endl;
        cout << m.at("mera") << endl;

        cout << m["unknownKey"] << endl;
        cout << m.at("unknownKey") << endl; // output(error): terminate called after throwing an instance of 'std::out_of_range'
        // cout << m["unknownKey"] << endl; // output: 0, reason: An entry is first made for the unknownKey assigned with '0'

        cout << m.size() << endl;
        
        //to check prescence
        cout << m.count("3asd") << endl;
        //if any key is not present count = 0;
        //if present count = 1;

        //erase
        // m.erase("love");
        // cout << m.size() << endl;

       //iterator
       map<string, int> :: iterator it = m.begin();

       while(it != m.end()){
            cout << it->first << " " << it->second << endl;
            it++;
       }

    //    a map iterator (it in your code) is not a raw pointer, but it behaves similarly to a pointer.
    //    "It" is an object that "points" to an element in the map and allows you to access the key and value using it->first and it->second
    //    think of it as a "smart pointer-like" object for iterating over the map.
        
    // The :: is called the "scope resolution operator" in C++.

    // In your code, map<string, int>::iterator means:

    // Look inside the map<string, int> class/type,
    // Access the type named iterator that is defined inside it.
    // So, :: is used to specify that iterator belongs to the map<string, int> class. It helps you access members (like types, functions, or variables) that are defined inside a class, struct, or namespace.
    
    return 0;
}