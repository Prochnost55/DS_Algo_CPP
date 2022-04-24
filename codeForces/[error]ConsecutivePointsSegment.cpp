#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int t;cin >> t;
    while(t>0){
        t--;
        int len; cin >> len;
        int x1 = -1;
        int x2 = -1;
        bool x1mod = false;
        bool pass = true;
        
        for (int i=0; i< len; i++){
            if(i == 0){
                cin >> x1;
                continue;
            }else{
                cin >> x2;
                if(x2-x1 > 3 ){
                    pass = false;
                    break;
                }
                if(x2-x1 == 3 && x1mod){
                    pass = false;
                    break;
                }
                if(x2-x1 == 2){
                    if(!x1mod){
                        x1mod = true;
                    }else{
                        x2--;
                    }
                }
                if(x2-x1 == 1){
                    x1mod = true;
                }
                x1 = x2;
            } 
        }
        cout << (pass ? "YES" : "NO")<< endl;
    }
}