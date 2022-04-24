#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
void printVector(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};
// void printArray(int arr[], int len){
//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// };

// my solution
int thirdMax(vector<int>& nums) {
    // sort
    sort(nums.begin(), nums.end(), greater<int>());
    
    // remove duplicates
    int j = 0;
    for(int i = 1; i<nums.size(); i++){
        if(nums[i] == nums[i-1]){
            j++;
        }else{
            nums[i-j]=nums[i];
        }
    }
    
    // answer
    if((nums.size()-j)>=3){
        // return index 2
        return nums[2];
    }else{
        // return last index
        return nums[0];
    }
}


// best solution
// int thirdMax(vector<int>& nums) {
//     // long used because range is inclusive of int min and max
   
//     long long one = LLONG_MIN ,two = LLONG_MIN ,three = LLONG_MIN;

//     // for in range
//     for(auto &num : nums)
//     {
//         if(one == num || two == num || three == num)
//             continue;
//         if(num > one){
//             three = two;
//             two = one;
//             one = num;
//         }
//         else if(num > two){
//             three = two;
//             two  = num;
//         }
//         else if(num > three){
//             three = num;
//         }
//     }
    
//     return three == LLONG_MIN ? one : three;
// }

int main(){
    vector<int> nums {1,1,2,2,3,4,4,3,5};
    cout << thirdMax(nums)<< endl;
}