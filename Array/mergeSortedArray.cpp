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

void mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    int i = 0, j = 0;
    vector<int> arr;

    while(i < m && j < n){
        if(nums1[i] < nums2[j]){
            arr.push_back(nums1[i++]);
        }else{
            arr.push_back(nums2[j++]);
        }
    }

    while(i < m){
        arr.push_back(nums1[i++]);
    }
    while(j < n){
        arr.push_back(nums2[j++]);
    }

    nums1 = arr;
}

int main(){    
    vector<int> nums1 {1,2,3};
    vector<int> nums2 {2,5,6};
    
    mergeSortedArray(nums1, nums1.size(), nums2, nums2.size());

    printVector(nums1);
}