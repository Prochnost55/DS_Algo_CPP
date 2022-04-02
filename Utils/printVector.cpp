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


int main(){
    vector<int> arr {1,6,74,4,6};
    printVector(arr);
}