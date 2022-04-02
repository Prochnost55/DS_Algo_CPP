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



int main(){
    vector<vector<int>> arr {{1},{6,74},{4,6}};
    print2DVector(arr);
}