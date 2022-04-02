#include <iostream>
using namespace std;

bool checkPalindrome(string& st, int i, int j){
    if(i>j){
        return true;
    }
    if(st[i] == st[j]){
        return checkPalindrome(st, ++i, --j);
    }else{
        return false;
    }
}

int main(){
    string st = "abba";
    cout << checkPalindrome(st, 0, st.length()-1);
}