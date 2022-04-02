#include <iostream>
using namespace std;


int sumOfArray(int arr[], int size){
    if(size == 0 ) return 0;
    return arr[0] + sumOfArray(arr+1, size-1);
}

int main(){
    int arr[5] = {2,4,6,7,3};
    cout << sumOfArray(arr, 5) << endl;
}