#include <iostream>
#include <vector>
using namespace std;

// general functions
void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

// Q1 - swap alternate elements in an array
void swapNext(int arr[], int len)
{
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
int findUnique(int arr[], int len)
{
    int ans = arr[0];
    for (int i = 1; i < len; i++)
    {
        ans = ans ^ arr[i];
    };
    return ans;
}

// Q3 - Duplicate In Array
// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397
int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int j = 1; j < arr.size(); j++)
    {
        ans = ans ^ j;
    }
    return ans;
}

// main function;
int main()
{
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

    // for Q3
    vector<int> arr{6, 3, 1, 5, 4, 3, 2};
    cout << findDuplicate(arr);
}