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

// initial logic

// int findGreatest(int* arr, int size){
//     int ans = -1;
//     for(int i = 0; i < size ; i++){
//         if(arr[i]>ans){
//             ans = arr[i];
//         }
//     }
//     return ans;
// }
// vector<int> replaceElements(vector<int>& arr) {
//     for(int i=0; i<arr.size(); i++){
//         arr[i] = findGreatest(&arr[i+1], arr.size()-i-1);
//     }
//     return arr;
// }


// leetcode solution
vector<int> replaceElements(vector<int>& arr) {
    int mx = -1; 
    int len = arr.size();
    for(int i = len-1; i >= 0; i--){
        mx = max(mx, exchange(arr[i], mx));
    }
    return arr;
}


int main(){    
    vector<int> nums1 {17,18,5,4,6,1};
    // cout << replaceElements(nums1) << endl;
    replaceElements(nums1);
    printVector(nums1);
}