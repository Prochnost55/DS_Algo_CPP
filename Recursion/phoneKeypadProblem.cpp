#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
void printVector(vector<string> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

void solve(string digits, string output, int i, vector<string>& ans, vector<string> key_map){
    // base case
    if(i >= digits.length()){
        ans.push_back(output);
        return;
    }
    int key = digits[i] - '0';
    string values = key_map[key];
    for(int j = 0; j<values.length(); j++){
        output.push_back(values[j]);
        solve(digits, output, i+1, ans, key_map);
        output.pop_back();
    }
    
}

vector<string> letterCombinations(string digits) {
    vector<string> ans;
    vector<string> key_map {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string output = "";
    int i = 0;
    solve(digits, output, i, ans, key_map);
    return ans;
}

int main(){
    vector<string> ans = letterCombinations("23");
    printVector(ans);
}