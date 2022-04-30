#include<iostream>
#include<map>
#include<vector>
#include <algorithm>
#include <stack>
#include <climits>

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    vector<vector<int>> ans;
    int I = 0;
    int J = 0;
    int maxI = mat.size();
    int maxJ = mat[0].size();

    if(r*c != maxI * maxJ){
        return mat;
    }
    for (int i = 0; i < r; i++){
        vector<int> temp;
        for(int j = 0; j< c; j++){
            if(J >= maxJ){
                I++;
                J = 0;
            }
            temp.push_back(mat[I][J++]);
        }
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    vector<vector<int>> nums {{1,2},{3,4}};
    vector<vector<int>> ans;
    ans = matrixReshape(nums, 2, 4);
    print2DVector(ans);
    
}