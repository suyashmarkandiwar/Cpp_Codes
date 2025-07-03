#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid+1;

    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0; idx < temp.size(); idx++) {
        arr[idx+st] = temp[idx];
    }

}

void mergeSort(vector<int> &arr, int st, int end) {
    if(st < end) {
        int mid = st + (end-st)/2;
        mergeSort(arr, st, mid); // left half
        mergeSort(arr, mid+1, end); // right half

        merge(arr, st, mid, end);

    }
}

void square(vector<int> &arr) {
    for(int i=0; i<arr.size(); i++) {
        arr[i] *= arr[i];

    }

    mergeSort(arr, 0, arr.size()-1);
}

int main(){
    vector<int> arr = {9,4,6,2};
    square(arr);

    for(int val : arr) {
        cout << val << " ";

    }

    cout << endl;
    return 0;
}