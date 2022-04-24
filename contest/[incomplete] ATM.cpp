#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <sstream>

using namespace std;

class ATM {
public:
    vector<long long> banknotes {0,0,0,0,0};
    vector<int> notes {20, 50, 100, 200, 500};
        
    void deposit(vector<int> banknotesCount) {
        for(int i = 0; i < banknotesCount.size(); i++){
            banknotes[i] = banknotes[i]+banknotesCount[i];
        }
    }
    
    vector<int> withdraw(int amount) {
        vector<long long> banknotesCpy(banknotes);
        vector<int> output {0, 0, 0, 0 ,0};
        for(int i = 4; i>=0; i--){    
            
            if(notes[i] > amount){
                continue;
            }else{
                if(banknotes[i] == 0){continue;};
                int reqNotes = amount / notes[i];
                int availableNotes = banknotes[i];
                if(availableNotes > reqNotes){
                    banknotes[i] = banknotes[i] - reqNotes;
                    amount = amount - (notes[i] * reqNotes);
                    output[i] = reqNotes;
                }else{
                    amount = amount - (notes[i] * banknotes[i]);
                    
                    output[i] = banknotes[i];
                    banknotes[i] = 0;
                }
            }
            
        }
        
        if(amount != 0) {
            banknotes = banknotesCpy;
            return {-1};
        };
        return output;
    }
};


int main(){
    vector <int> deposit1 {0,0,1,2,1};//0,1,0,1,1
    vector <int> deposit2 {0,1,0,1,1};
    ATM atm;
    atm.deposit(deposit1);
    vector <int> w1 = atm.withdraw(600); 
    printVector(w1);
    atm.deposit(deposit2);
    vector <int> w2 = atm.withdraw(600); 
    printVector(w2);
}