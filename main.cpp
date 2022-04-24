#include<iostream>
#include<map>
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

int find_greater(vector<int> &arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int m = e - (e-s) / 2;
    
    while(s<e){
        
        
        if(arr[m] >= target){
            e = m-1;
        }
        if(arr[m] < target){
            s = m;
        }
        m = e - (e-s) / 2;    
    }
    
    return -1;
}
vector<int> countRectangles(vector<vector<int>>& rectangles, vector<vector<int>>& points) {
        vector<int> ans;
        vector<int> rx;
        vector<int> ry;
        
        for (int i = 0; i<rectangles.size(); i++){
            rx.push_back(rectangles[i][0]);
            ry.push_back(rectangles[i][1]);
        }
        
        for (int i = 0; i<points.size(); i++){
            int a = find_greater(rx, points[i][0]);
            int b = find_greater(ry, points[i][1]); 
            // cout << (rx.size() - a - 1) << " " << (ry.size() - b - 1) << endl;
            cout << a << " " << b << endl;
            // ans.push_back(max(min(a, b), 0));
        }
        return ans;
    }

int main(){
    vector<int> ans;
    vector<vector<int>> rectangles {{1,2},{2,3},{2,5}};
    vector<vector<int>> points {{2,1},{1,4}};
    ans = countRectangles(rectangles, points);

    // vector<int> test {2,3,5};

    // cout << find_greater(test, 1) << endl;
    printVector(ans);
}