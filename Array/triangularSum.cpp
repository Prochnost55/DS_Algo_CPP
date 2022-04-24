#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <sstream>

using namespace std;
void printVector(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

// int triangularSum(vector<int>& nums) {
//     vector<int> ans;
//     if(nums.size() == 1){
//         return nums[0];
//     }
//     for(int i = 1; i<nums.size(); i++){
//         ans.push_back((nums[i]+nums[i-1]) % 10 );
//     }
//     nums = ans;
//     printVector(nums);
    
//     return triangularSum(nums);  
// }

// better optimised code
int triangularSum(vector<int>& nums) {
        int a = 0, b = 0;
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i = 1; i<nums.size(); i++){
            if(i==1){
                a = nums[i-1];
                b = nums[i];
            }else{
                a = b;
                b = nums[i];
            }
            nums[i-1] = (a+b) % 10;
        }
        nums.pop_back();
        return triangularSum(nums);
    }
int main(){
    vector<int> nums {1,2,3,4,5};
    triangularSum(nums);
}