#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <sstream>

using namespace std;

int findClosestNumber(vector<int>& nums) {
    int closest = INT_MAX;
    for (int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            if(nums[i] < (closest < 0 ? -1*closest :closest)){
                 closest = nums[i];   
            }
        }else{
            
            if( (nums[i] * -1) < (closest < 0 ? -1*closest :closest) ){
                closest = nums[i];
            }
        }
    }
    return closest;
}



int main(){
    vector<int> nums {-4,-2,1,4,8};
    cout << findClosestNumber(nums) << endl;
}