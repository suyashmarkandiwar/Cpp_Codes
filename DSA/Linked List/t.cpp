#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = nums.size();
        
        for(int i=0; i<l; i++){
            nums[i] *= nums[i];
        }
        for(int i=0; i<l-1; i++){
            for(int j=0; j<l-i-1; j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp; 
                }
            }
        }

        
    }
};

int main(){
    Solution s;
    
    vector<int> arr = {9,8,3,4,5};

    s.sortedSquares(arr);
    for(int i=0; i<arr.size(); i++){
           cout<< arr[i] << " ";
        }
    cout << endl;

    return 0;
}