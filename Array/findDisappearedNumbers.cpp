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



vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> ans;
    int i = 0;
    while(i < nums.size()){
        if(nums[i] == i+1){
            i++;
        }else{
            if(nums[i] == nums[nums[i]-1]){
                i++;
            }else{
                swap(nums[i], nums[nums[i]-1]);    
            }
        }
    }
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] != i+1){
            ans.push_back(i+1);
        }
    }
    return ans;
}

int main(){
    vector<int> nums {4,3,2,7,8,2,3,1};
    vector<int> ans;
    ans = findDisappearedNumbers(nums);
    printVector(ans);
    
}