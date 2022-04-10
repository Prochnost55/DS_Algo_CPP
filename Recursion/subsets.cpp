#include <iostream>
#include <vector>
using namespace std;

void print2DVector(vector<vector<int>> &vect){
  for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }
}
void subsets(vector<int>& nums, vector<int> output,vector<vector<int>>& ans, int i = 0) {
    
    if(i>=nums.size()){
        ans.push_back(output);
        return;
    }
    
    // exclude
    subsets(nums, output, ans, i+1);

    // include
    output.push_back(nums[i]);
    subsets(nums, output, ans, i+1);
    cout << endl;
}

int main(){
    vector<int> arr {1, 2, 3};
    vector<int> output;
    vector<vector <int>> ans;
    subsets(arr, output, ans);
}