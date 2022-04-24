#include<iostream>
#include<vector>
using namespace std;


int lengthOfLastWord(string s) {
    int I = -1, J = -1;
    int len = s.length();
    
    for(int i = len-1; i >= 0; i--){
        if(s[i] != ' '){
            I = i;
            break;
        }
    }

    for(int i = I; i >=0; i--){
        if(s[i] == ' '){
            J = i;
            break;
        }
    }
    
    return I - J;
}

int main(){
    string s = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(s) << endl;
}