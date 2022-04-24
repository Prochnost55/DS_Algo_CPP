#include<iostream>
#include<map>
#include<vector>
#include <algorithm>

using namespace std;

int countLatticePoints(vector<vector<int>>& circles) {
    int count = 0;
    
    for(int i = 0; i <= 200; i++){
        for(int j = 0; j <= 200; j++){
            for(int k = 0; k < circles.size(); k++){
                int x = circles[k][0];
                int y = circles[k][1];
                int r = circles[k][2];
                if(((x-i)*(x-i) + (y-j)*(y-j)) <= r*r){
                    count++;
                    break;
                }
            }
        }
    }
    
    return count;
}

int main(){
    vector<vector<int>> circles {{8,9,6},{9,8,4}};
    cout << countLatticePoints(circles) << endl;
}