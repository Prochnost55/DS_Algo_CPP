#include<iostream>
#include<map>
#include<vector>
#include <algorithm>
#include <stack>
#include <climits>

using namespace std;
void print2DVector(vector<vector<int>> &vect){
  for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }
}

void printVector(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

// int find_greater(vector<int> &arr, int target){
//     int s = 0;
//     int e = arr.size()-1;
//     int m = e - (e-s) / 2;
    
//     while(s<e){
        
        
//         if(arr[m] >= target){
//             e = m-1;
//         }
//         if(arr[m] < target){
//             s = m;
//         }
//         m = e - (e-s) / 2;    
//     }
    
//     if(m == 0 && arr[m] >= target){
//         return -1;
//     }
    
//     return m;
// }
bool isBadVersion(int m){
    return m >= 6;
}
int firstBadVersion(int n) {
        int s = 0;
        int e = n;
        int m = e - (e-s)/2;
        int ans = -1;
        
        while(s<e){
            cout << s <<" "<< m  << " " << e << endl;
            if(isBadVersion(m)){
                ans = m;
                e = m-1;
            }else{
                s = m+1;
            }
            
            m = e - (e-s)/2;
            
        }
        
        return m;
    }
// vector<int> countRectangles(vector<vector<int>>& rectangles, vector<vector<int>>& points) {
//         vector<int> ans;
//         vector<int> rx;
//         vector<int> ry;
        
//         for (int i = 0; i<rectangles.size(); i++){
//             rx.push_back(rectangles[i][0]);
//             ry.push_back(rectangles[i][1]);
//         }

//         sort(rx.begin(), rx.end());
//         sort(ry.begin(), ry.end());
    
//         for (int i = 0; i<points.size(); i++){
//             int a = find_greater(rx, points[i][0]);
//             int b = find_greater(ry, points[i][1]); 
//             a = (rx.size() - a - 1);
//             b = (ry.size() - b - 1);
//             ans.push_back(max(min(a, b), 0));
//         }
//         return ans;
//     }

// int main(){
//     vector<int> ans;
//     vector<vector<int>> rectangles {{7,1},{2,6},{1,4},{5,2},{10,3},{2,4},{5,9}};
//     vector<vector<int>> points {{2,3}};
//     ans = countRectangles(rectangles, points);

//     // vector<int> test {2,3,5};

//     // cout << find_greater(test, 1) << endl;
//     printVector(ans);
// }

// {{7,1},{2,6},{1,4},{5,2},{10,3},{2,4},{5,9}}
// {{10,3},{8,10},{2,3},{5,4},{8,5},{7,10},{6,6},{3,6}}

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