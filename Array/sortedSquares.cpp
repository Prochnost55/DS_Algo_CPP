#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

vector<int> sortedSquares(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++){
        nums[i] = nums[i] * nums[i];
    }
    
    sort(nums.begin(), nums.end());
    return nums;
}

int main(){    
    vector<int> nums1 {-4,-1,0,3,10};
    sortedSquares(nums1);
    printVector(nums1);
}