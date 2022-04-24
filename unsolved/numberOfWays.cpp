#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <sstream>

using namespace std;
void printVector(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};
int getOccurence(string& s, int i, char c){
    int res = 0;
    for (; i<s.length(); i++){
        if(s[i]==c){
            res++;
        }
    }
    return res;
}
// long long numberOfWays(string s) {
//     long long ans = 0;
//     for(int i = 0; i<s.length()-2; i++){
//         for(int j = i+1; j<s.length()-1; j++){
//              if(s[i] == s[j]){
//                  continue;
//              }else{
//                  if(s[j] == '1'){
//                      ans = ans + getOccurence(s, j, '0');
//                  }else{
//                      ans = ans + getOccurence(s, j, '1');
//                  }
//              }
//         }
//     }
    
//     return ans;
// }
long long numberOfWays(string s) {
    long long ans = 0;
    int i = 0, j = 0, k = 0; 
    while( i < s.length()-2){
        j = s.find(((s[i]=='0')?'1':'0'),max(i,j));
        if(j==-1 || j >= s.length()-1){
            i++;
            j=0;
            k=0;
            continue;
        }

        int k = getOccurence(s, j, ((s[j]=='0')?'1':'0'));
        ans = ans + k;
        j++;
    }
    return ans;
}

int main(){
    string s = "001101";
    cout << numberOfWays(s) << endl;
    
}