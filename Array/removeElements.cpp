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

void printArray(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

// int removeElement(vector<int>& nums, int val) {
//     int i = 0; int j = 0;
//     while(i < nums.size() && j < nums.size()){
//         for(i; i < nums.size(); i++){
//             if(nums[i] == val){
//                 break;
//             }
//         }
        
//         for(j=i; j < nums.size(); j++){
//             if(nums[j] != val){
//                 break;
//             }
//         }
        
//         if(j < nums.size() && j>i){
//             swap(nums[i], nums[j]);
//         }
        
//     }
//     return i;
// }

// int removeElement(vector<int>& nums, int val) {
//     for(int i = 0; i < nums.size(); i++){
//         if(nums[i] == val){
//             nums.erase(nums.begin()+i);
//             i--;
//         }
//     }
//     return nums.size();
// }

int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == val)
                j++;
            else
                nums[i - j] = nums[i];
        }
        return nums.size() - j;
    }

int main(){    
    vector<int> nums1 {0,1,2,2,3,0,4,2};
    // 0 1 3 0 4 2 2 2
    cout << removeElement(nums1, 2) << endl;
    printVector(nums1);
}