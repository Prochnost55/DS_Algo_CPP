#include <iostream>
#include <vector>
using namespace std;

int getDigits(int num){
    int digit = 0;
    while(num){
        digit++;
        num = num/10;
    }
    return digit;
}

int findNumbers(vector<int>& nums) {
    int ans = 0;
    for(int i = 0; i < nums.size(); i++){
        if(getDigits(nums[i]) % 2 == 0){
            ans++;
        }
    }
    return ans;
}

int main(){    
    vector<int> nums1 {12,345,2,6,7896};    
    cout << findNumbers(nums1)<< endl;
}