#include <iostream>
#include <vector>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if(i == j){
                continue;
            }
            if(arr[j] == arr[i] * 2){
                return true;
            }
        }
    }
    return false;
}

int main(){    
    vector<int> nums1 {0, 0};
    cout << checkIfExist(nums1) << endl;
}