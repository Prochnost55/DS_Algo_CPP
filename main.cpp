#include <iostream>
#include <vector>
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


void merge(vector<int>& arr, int s, int e){
    int m = s+(e-s)/2;
    int len1 = m-s+1;
    int len2 = e-m;
    
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int arrIndex = s;
    for(int i = 0; i < len1; i++){
        arr1[i] = arr[arrIndex++];
    }

    arrIndex = m+1;
    for(int i = 0; i < len2; i++){
        arr2[i] = arr[arrIndex++];
    }

    
    int arr1Index = 0;
    int arr2Index = 0;
    arrIndex = s;
    
    while(arr1Index < len1 && arr2Index < len2){
        if(arr1[arr1Index] < arr2[arr2Index]){
            arr[arrIndex++] = arr1[arr1Index++];
        }else{
            arr[arrIndex++] = arr2[arr2Index++];
        }
    }

    while(arr1Index < len1){
        arr[arrIndex++] = arr1[arr1Index++];
    }
    while(arr2Index < len2){
        arr[arrIndex++] = arr2[arr2Index++];
    }
}

void mergeSort(vector<int>& arr, int s, int e, string side) {
    
    if(s >= e){
        return;
    }
    
    int m = s + (e-s)/2;
    
    mergeSort(arr, s, m, " left");
    mergeSort(arr, m+1, e, " right");
    merge(arr, s, e);
}

int main(){
    vector<int> arr {4,1,6,2,3,5};
    mergeSort(arr, 0, arr.size()-1, " start");
    printVector(arr);   
}