#include <iostream>
using namespace std;

void reverseString(int i, int j, string& st){
    if(i>j){
        return;
    }
    swap(st[i], st[j]);
    i++;j--;
    reverseString(i, j, st);
}
int main(){
    string st = "abhishek";
    reverseString(0, st.length()-1, st);
    cout << st << endl;
}