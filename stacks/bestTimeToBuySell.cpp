#include<iostream>
#include<map>
#include<vector>
#include <algorithm>
#include <stack>
#include <climits>

int maxPro(vector<int>& nums){
    reverse(nums.begin(), nums.end());
    stack<int> s;
    s.push(INT_MAX);
    
    int maxProfit = 0;
    
    for (int i = nums.size()-1; i>=0; i--){
        if(s.top() > nums[i]){
            s.push(nums[i]);
        }
        maxProfit = max(maxProfit, nums[i] - s.top());
    }
    return maxProfit;
}
int main(){
    vector<int> nums {7,1,5,3,6,4};
    cout << maxPro(nums);
}