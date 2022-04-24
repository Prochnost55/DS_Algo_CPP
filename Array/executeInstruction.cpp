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

vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
    vector<int> ans;
    int I = startPos[0];
    int J = startPos[1];

    for(int b = 0; b<s.length(); b++ ){
        int count = 0;
        int i = I;
        int j = J;
        for (int a = b; a<s.length(); a++){
            if(s[a] == 'L'){
                j--;
            }
            if(s[a] == 'R'){
                j++;
            }
            if(s[a] == 'U'){
                i--;
            }
            if(s[a] == 'D'){
                i++;
            }
            if(i > (n-1) || j > (n-1) || i < 0 || j < 0){
                break;
            }else{
                count++;
            }
        }
        ans.push_back(count);
        count = 0;
    }
    
    return ans;
}

int main(){
    vector<int> ans;
    vector<int> start {0, 1};
    string s = "RRDDLU";
    ans = executeInstructions(3, start, s );
    printVector(ans);
}