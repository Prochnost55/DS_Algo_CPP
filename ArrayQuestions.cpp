#include <iostream>
#include <vector>
#include <bits/stdc++.h>
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


// Q1 - swap alternate elements in an array
void swapNext(int arr[], int len){
    int isOdd = len & 1;
    if (isOdd)
    {
        len--;
    };
    for (int i = 0; i < len; i = i + 2)
    {
        // int temp = arr[i];
        // arr[i] = arr[i + 1];
        // arr[i + 1] = temp;
        swap(arr[i], arr[i + 1]);
    }
};

// Q2 - Find unique element in an array;
// https://www.codingninjas.com/codestudio/problems/find-unique_625159
int findUnique(int arr[], int len){
    int ans = arr[0];
    for (int i = 1; i < len; i++)
    {
        ans = ans ^ arr[i];
    };
    return ans;
}

// Q3 - Duplicate In Array
// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397
int findDuplicate(vector<int> &arr){
    int ans = 0;
    for (int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }

    for (int j = 1; j < arr.size(); j++){
        ans = ans ^ j;
    }
    return ans;
}

// Q4 - Intersection Of Two Arrays
// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149
vector<int> getIntesection(vector<int> &arr1, vector<int> &arr2){
  int i = 0;
  int j = 0;
  vector<int> ans;
  while(i < arr1.size() && j< arr2.size() ){
    if(arr1[i]==arr2[j]){
      ans.push_back(arr2[j]);
      i++;j++;
    }else if(arr1[i] < arr2[j]){
      i++;
    }else if(arr1[i] > arr2[j]){
      j++;
    }
  }
  return ans;
}

// Q5 - Pair Sum
// https://www.codingninjas.com/codestudio/problems/pair-sum_697295
vector<vector<int>> pairSum(vector<int> &arr, int s){
  vector<vector<int>> ans;
  int i = 0;
  int j = 1;
  int len = arr.size();
  while(i < len){
    if(j<len){
      if(arr[i]+arr[j] == s){
        vector<int> subAns;
        subAns.push_back(arr[i]);
        subAns.push_back(arr[j]);
        sort(subAns.begin(), subAns.end());
        ans.push_back(subAns);
      }
      j++;
    }else{
      i++;
      j=i+1;
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}

// main function;
int main(){
    // // for Q1
    // int oddArr[9] = {54, 1, 35, 21, 4, 233, 45, 67, 12};
    // int evenArr[10] = {54, 1, 35, 21, 4, 233, 45, 67, 12, 9};
    // int oddLen = 9;
    // int evenLen = 10;

    // swapNext(oddArr, oddLen);
    // printArray(oddArr, oddLen);

    // swapNext(evenArr, evenLen);
    // printArray(evenArr, evenLen);

    // // for Q2
    // int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    // int len = 7;
    // cout << findUnique(arr, len);

    // // for Q3
    // vector<int> arr{6, 3, 1, 5, 4, 3, 2};
    // cout << findDuplicate(arr);

    // // for Q4
    // vector<int> arr1{1, 2, 2, 2, 3, 4};
    // vector<int> arr2{2, 2, 3, 3};
    // vector<int> ans = getIntesection(arr1, arr2);
    // printVector(ans);

    // // for Q5
    // vector<int> arr1 {1, 2, 3, 4, 5};
    // vector<int> arr2 {2, -3, 3, 3, -2};

    // vector<vector<int>> ans1 = pairSum(arr1, 5);
    // vector<vector<int>> ans2 = pairSum(arr2, 0);

    // print2DVector(ans1);
    // print2DVector(ans2);
}