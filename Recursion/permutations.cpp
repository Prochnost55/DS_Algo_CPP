#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <sstream>

using namespace std;

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

void solve(vector<int> nums, vector<vector <int>>& output, int i = 0){
    
    if(i >= nums.size()){
        output.push_back(nums);
        return;
    }
    
    for (int j = i; j < nums.size(); j++){
        vector<int> temp(nums);
        swap(temp[i], temp[j]);   
        solve(temp, output, i+1); 
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector <int>> output;
    solve(nums, output);
    return output;
}

int main(){
    vector <int> nums {1};
    vector <vector<int>> permuted;
    permuted = permute(nums);
    print2DVector(permuted);
    
    
}