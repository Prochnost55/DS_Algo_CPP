#include<iostream>
// #include<map>
#include<vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

vector<int> intersection2(vector<int> &v1,
                                      vector<int> &v2){
    vector<int> v3;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    set_intersection(v1.begin(),v1.end(),
                          v2.begin(),v2.end(),
                          back_inserter(v3));
    return v3;
}

vector<int> intersection(vector<vector<int>>& nums) {
    vector<int> ans = nums[0];
    sort(ans.begin(), ans.end());
    int max = ans[ans.size() - 1];
    
    // printVector(ans);
    
    for (int i = 1; i < nums.size(); i++){
        ans = intersection2(nums[i], ans);
    }
    return ans;
}

int main(){
    vector<int> ans;
    vector<vector<int>> nums {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}};
    // string s = "RRDDLU";
    ans = intersection(nums);
    printVector(ans);
}