#include "procho.h"
#include <iostream>
using namespace std;

// general functions
void printArray(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

void printVector(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

void print2DVector(vector<vector<int>> &vect){
  for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }
}

bool sortcol(const vector<int>& v1, const vector<int>& v2, int colIndex)
{
    return v1[colIndex] < v2[colIndex];
}

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
    int arr[10] = {1,4,6,8,12,14,18,20,25,28};
    // cout << binarySearch(arr, 10, 14) << endl;
    printArray(arr, 10);
    cout << "asdf";
}