#include<iostream>
#include<map>
#include<vector>
using namespace std;

// int countHillValley(vector<int>& nums) {
//     int hills = 0;
//     int valley = 0;
//     for (int i = 0; i < nums.size(); i++){
//         int j = i-1; int k = i+1;
        
//         while(j >= 0 && nums[j] == nums[i]){
//             j--;
//         }
//         if(j== -1){
//             continue;
//         }
        
//         while(k < nums.size() && nums[k] == nums[i]){
//             k++;
//         }
//         if(k== nums.size()){
//             continue;
//         }

//         if(nums[j] > nums[i] && nums[k] > nums[i]){
//             i = k-1;
//             valley++;
//         }
//         if(nums[j] < nums[i] && nums[k] < nums[i]){
//             hills++;
//             i = k - 1;
//         }

        
//     }            
//     return (hills+valley);
// }
void printVector(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};
int countHillValley(vector<int> nums){
    vector<int> n;
    n.push_back(nums[0]);
    
    for(int i = 1; i < nums.size(); i++){
        if(nums[i-1] != nums[i]){
            n.push_back(nums[i]);
        }
    }
    int res = 0;
    for(int i = 1; i < n.size()-1; i++){
        if(n[i-1] > n[i] && n[i+1] > n[i]){
            res++;
        }else if(n[i-1] < n[i] && n[i+1] < n[i]){
            res++;
        }
    }
    // printVector(n);
    return res;
}
int main(){
    vector<int> test {2,4,1,1,6,5};

    cout << countHillValley(test) << endl;
}