/* Question: Frequency of the most repeated element */
#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int maxFrequency(vector<int>& arr, int n){
    unordered_map<int, int> count;

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    int maxi = INT_MIN;
    int ans = -1; //ans is initialized to -1 as a default value in case the array is empty (safer and default for most cases)
                  //or no element is found with a frequency greater than maxi (which starts at INT_MIN
    
    for(auto i:count) {
        if(i.second > maxi) {
            maxi = i.second;
            ans = i.first;
        }
    }

    // auto i : count is a range-based for loop in C++. It is a modern and simpler way to 
    // iterate over all elements in a container (like a map, vector, etc.).

    // auto automatically deduces the type of i (in this case, i is a pair<const int, int> for unordered_map<int, int>).
    // count is the container you are iterating over.
    // For each iteration, i represents one key-value pair from the map.

    // for(unordered_map<int, int>::iterator it = count.begin(); it != count.end(); it++) {
    //     if(it->second > maxi) {
    //         maxi = it->second;
    //         ans = it->first;
    //     }
    // }

    // Classic iterator loop: you use begin() and end() explicitly.
    // Range-based for loop: C++ handles the start and end for you, so you just write for(auto i : container).

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3,2, 3, 3, 4, 4, 4, 4};
    int n = arr.size();
    cout << "Element with maximum frequency: " << maxFrequency(arr, n) << endl;
    return 0;
}

