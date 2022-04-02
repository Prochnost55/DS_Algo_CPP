#include <iostream>
#include <vector>
using namespace std

// returns index of target element, if it exists, else returns -1.
int binarySearch(vector<int>& nums, int target, int s = -10, int e = -10) {
        if(s == -10){
            s = 0;
        }
        if(e == -10){
            e = nums.size() - 1;
        }
        int m = s + (e - s)/2;

        if(s>e){
            return -1;   
        }
        if(nums[m] == target){
            return m;
        }
    
        if(nums[m] > target){
            return binarySearch(nums, target, s, m-1);
        }else{
            return binarySearch(nums, target, m+1, e);
        }
    }
int main(){
    vector<int> nums {1,3,5,7,9,12,53};
    cout << binarySearch(nums, 5) << endl;
}