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

int partition(vector<int>& arr, int s, int e){
    // get pivot
    int pivot = arr[s];

    // place the pivot at right position
    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] < pivot){
            count++;
        }
    }
    swap(arr[s], arr[s+count]);
    
    // place smaller on left and greater on right
    int i = s; int j = e;
    while(i < j){
        while(arr[i]<pivot){i++;};
        while(arr[j]>pivot){j--;};
        
        if(arr[i]>=pivot && arr[j]<=pivot){
            swap(arr[i++], arr[j--]);
        }
    }
    return s+count;
}

void quickSort(vector<int>& arr, int s, int e){
    // base case
    if(s >= e){
        return;
    }

    // get partition index
    int p = partition(arr, s, e);
    
    // recursion logic
    quickSort(arr, s, p-1); // left
    quickSort(arr, p+1, e); // right
}


int main(){
    vector<int> arr {9, 9, 9, 8, 2, 3, -6};
    quickSort(arr, 0, arr.size()-1);
    printVector(arr);   
}