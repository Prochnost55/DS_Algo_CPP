#include <iostream>
using namespace std

int binarySearch(int arr[], int len,int key){
  int m = 0;
  int s = 0;
  int e = len - 1;
  while(s<=e){
      m = e - (e-s)/2;
      if(arr[m] == key){
        return m;
      };
      
      if(arr[m] > key){
        e = m-1;
      }else{
        s = m+1;
      }
    }
  return -1;
}

int main() {
    int arr[5] = {1,2,6,8,9};
    cout << binarySearch(arr, 5, 3);
}