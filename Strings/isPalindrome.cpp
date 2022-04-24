#include<iostream>
#include<vector>
using namespace std;


bool isPalindrome(string s) {
    int i = 0; int j = s.length()-1;
    
    while(i<j){
        if( 
            !(
            (s[i] >= 'A' && s[i] <= 'Z') || 
            (s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= '0' && s[i] <= '9')
            )
        ) {
            i++;
            continue;
        }
        if( 
            !(
            (s[j] >= 'A' && s[j] <= 'Z') || 
            (s[j] >= 'a' && s[j] <= 'z') || 
            (s[j] >= '0' && s[j] <= '9')
            )
        ) {
            j--;
            continue;
        }

        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += ' '; 
            continue;
        }
        
        if(s[j] >= 'A' && s[j] <= 'Z'){
            s[j] += ' '; 
            continue;
        }

        if(s[j] != s[i]){
            return false;
        }
        
        cout << s[i] << " " << s[j] << endl;
        i++; j--;
    }
    return true;
}

int main(){
    // string s = "0P";
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s) << endl;
    // char a = s[0] + ' '; 
    // cout << ('a' == ('A' + ' ')) << endl;
}