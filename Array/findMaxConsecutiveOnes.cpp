#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]){
                temp = temp+1;
            }else{
                if(temp > ans){
                    ans = temp;
                }
                temp = 0;
            }
        }
        if(temp > ans){
            ans = temp;
        }
        return ans;
    }

int main(){    
    vector<int> nums1 {1,0,1,1,1,1};
    cout << findMaxConsecutiveOnes(nums1)<< endl;
}
