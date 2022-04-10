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

void moveZeroes(vector<int>& nums) {
    int j = 0;
    int len = nums.size();
    for(int i = 0; i< len; i++){
        if(nums[i] == 0){
            j++;
        }else{
            swap(nums[i-j], nums[i]);
        }
    }
}


int main(){    
    vector<int> nums1 {17,0,5,0,0,1};
    // cout << replaceElements(nums1) << endl;
    moveZeroes(nums1);
    printVector(nums1);
}