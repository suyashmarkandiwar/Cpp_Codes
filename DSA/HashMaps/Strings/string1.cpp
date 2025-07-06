#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std; 

int freq(vector<int> &arr, int k) {
    unordered_map<char, int> c;
    int maxFreq = 0;
    int ans = 0;
 
    for(auto i: arr) {
        c[i]++;
        maxFreq = max(maxFreq, c[i]);
    }

    for(unordered_map<char, int>:: iterator t = c.begin(); t != c.end(); t++) {
        if(maxFreq == t->second) {
            ans = t->first;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {'a','a','b','c','c'};
    int a = arr.size();
    // char r = freq(arr, a);
    // cout << r << endl;
    // (or)

    cout << (char)freq(arr, a) << endl;
    return 0;
}