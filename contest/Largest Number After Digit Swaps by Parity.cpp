#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestInteger(int num) {
    int ans = 0;
    vector<int> even;
    vector<int> odd;
    vector<int> order;
    while(num>0){
        int digit = num % 10;
        if(digit%2){
            order.push_back(0);
            even.push_back(digit);
        }else{
            order.push_back(1);
            odd.push_back(digit);
        }
        num = num / 10;
    }
    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end(), greater<int>());
    reverse(order.begin(), order.end());

    for(int i = 0; i < order.size() ; i++){
        if(order[i] == 1){
            ans = ans*10 + odd[0];
            odd.erase(odd.begin());
        }else{
            ans = ans*10 + even[0];
            even.erase(even.begin());
        }
    }
    return ans;
}

int main(){
    int input = 160504;
    cout << largestInteger(input) << endl;
}