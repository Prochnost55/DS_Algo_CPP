#include<iostream>
using namespace std;
int main(){
    int t;cin >> t;
    while(t>0){
        t--;
        string s; cin >> s;
        int j = 0;
        char ch = s[0];
        int slen = s.length();
        bool pass = true;
        if (slen == 1){
            cout << "NO" << endl;
            continue;
        }
        for(int i = 1; i< slen; i++){
            if(s[i] != ch){
                ch = s[i];
                int len = i - j;
                j = i;
                if(len == 1){
                    pass = false;
                    break;
                }
            }
            if(i == slen-1){
                int len = i-j+1;
                if(len == 1){
                    pass = false;
                    break;
                }
            }
        }
        
        cout << (pass ? "YES" : "NO") << endl;
    }
}