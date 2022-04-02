#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

int main(){
    int arr[5] = {1,6,74,4,6};
    printArray(arr, 5);
}