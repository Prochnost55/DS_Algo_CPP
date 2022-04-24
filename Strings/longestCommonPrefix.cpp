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

string longestCommonPrefix(vector<string>& strs) {
    string longestPrefix = strs[0];
    for(int i = 1; i < strs.size(); i++){
        if(longestPrefix.length() == 0){
            break;
        }
        if(longestPrefix.length() > strs[i].length()){
            longestPrefix.erase(strs[i].length());
        }else{
            strs[i].erase(longestPrefix.length());
        }
        while(longestPrefix != strs[i]){
            longestPrefix.erase(longestPrefix.length()-1);
            strs[i].erase(strs[i].length()-1);
        }
    }
    
    return longestPrefix;
}

int main(){
    vector<string> strs {"flower","flow","flight"};
    cout << longestCommonPrefix(strs) << endl;
}