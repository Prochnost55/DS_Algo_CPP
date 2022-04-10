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

int peakOfMountain(vector<int>& arr){
    int index = 0;
    bool isDec = false;
    
    for(int i=1; i< arr.size(); i++){
        if(isDec && arr[i] >= arr[i-1]){
            return -1;
        }
        
        if(arr[i] > arr[index]){
            index = i;
        }else if(arr[index] == arr[i]){
            return -1;
        }else{
            isDec = true;
        }
    }
    return index;
}

bool validMountainArray(vector<int>& arr) {
    if(arr.size()<3){return false;};
    int peakIndex = peakOfMountain(arr);
    if(peakIndex==-1){return false;}
    if(
        peakIndex-1 >= 0 && 
        peakIndex+1 < arr.size() && 
        arr[peakIndex-1] < arr[peakIndex] && 
        arr[peakIndex+1] < arr[peakIndex]
    ){
        return true;
    }
    
    return false;
}

int main(){    
    vector<int> nums1 {1,7,9,5,4,1,1};
    cout << validMountainArray(nums1) << endl;
}