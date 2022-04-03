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

int removeDuplicates(vector<int>& nums) {
    int j = 0;
    int count = 1;
    for(int i=1; i<nums.size() ; i++){
        if(nums[i] == nums[i-1]){
            j++;
        }else{
            nums[i-j] = nums[i];
            count++;
        }
    }
    return count;
}

int main(){    
    vector<int> nums1 {0,0,1,1,1,2,2,3,3,4};
    // 0 1 3 0 4 2 2 2
    cout << removeDuplicates(nums1) << endl;
    printVector(nums1);
}