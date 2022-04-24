#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <sstream>

using namespace std;

// void printVector(vector<int> &arr){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// };

// void print2DVector(vector<vector<int>> &vect){
//   for (int i = 0; i < vect.size(); i++) {
//         for (int j = 0; j < vect[i].size(); j++)
//             cout << vect[i][j] << " ";
//         cout << endl;
//     }
// }

string removeOccurrences(string s, string part) {
    int i = s.find(part); 
    if(i == -1){
        return s;
    }
    s.erase(i, part.length());
    return removeOccurrences(s, part);
}

int main(){
    string s = "daabcbaabcbc", part = "abc";
    cout << removeOccurrences(s, part) << endl;
}