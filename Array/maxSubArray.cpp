#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// string addBinary(string a, string b) {
//     string ans = "";
//     string carry = "0";
    
//     return ans;
// }

// int maxSubArray(vector<int>& nums) {
//         int n = nums.size(), ans = INT_MIN;
//         for(int i = 0; i < n; i++) 
//             for(int j = i, curSum = 0; j < n ; j++) 
//                 curSum += nums[j],
//                 ans = max(ans, curSum);        
//         return ans;
//     }

int maxSubArray(vector<int>& nums) {
        int curMax = 0, maxTillNow = INT_MIN;
        for(auto c : nums){
            curMax = max(c, curMax + c);
            maxTillNow = max(maxTillNow, curMax);
        }
        return maxTillNow;
    }
int main(){
    vector<int> nums {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums) << endl;
    // string a = "11";
    // string b = "1";
    // cout << addBinary(a, b) << endl;
}