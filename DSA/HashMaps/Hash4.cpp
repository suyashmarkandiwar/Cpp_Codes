/* Q. Find the element with maximum frequncy in the array
      If two or more elements contend for the maximum freq, return the
      element which occurs in the array first i.e. whose index is lowest.
*/
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int maxFrequency(vector<int> &arr, int n){
    unordered_map<int, int> count;

    int maxFreq = 0;
    int maxAns = 0;

    for(int i=0; i<n; i++) {
        count[arr[i]]++;
        maxFreq = max(maxFreq, count[arr[i]]);
    }

    for(int i=0; i<n; i++) {
        if(maxFreq == count[arr[i]]) {
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 2, 4, 3, 5, 5, 5, 5, 4, 4, 4};
    int n = arr.size();
    cout << "Element with maximum frequency: " << maxFrequency(arr, n) << endl;
    return 0;
}
