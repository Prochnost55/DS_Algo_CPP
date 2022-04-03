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

void duplicateZeros(vector<int>& arr) {
    int len = arr.size();
    for(int i = 0; i<len; i++){
        if(arr[i] == 0){
            arr.insert(arr.begin()+(++i),0);
        }
    }
    arr.erase(arr.begin()+len, arr.end());
    
}

int main(){    
    vector<int> nums1 {1,0,2};
    duplicateZeros(nums1);
    printVector(nums1);
}