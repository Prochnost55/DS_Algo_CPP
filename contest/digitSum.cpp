#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <sstream>

using namespace std;


string digitSum(string s, int k) { 
    if(s.length() == k || s.length() < k){
        return s;
    }
    
    string S ;
    int e = s.length() % k == 0 ? (s.length() / k) : (s.length() / k)+1; 
    for (int i = 0; i < e; i++){
        string tempS = s.substr(i*k, k);
        int num = 0;
        for(int j=0; j < tempS.length(); j++){
            num = num + (tempS[j] - '0');
        }
        S = S+to_string(num);
    }
    
    return digitSum(S, k);
}


int main(){
    string s = "1";
    cout << digitSum(s, 2) << endl;
}