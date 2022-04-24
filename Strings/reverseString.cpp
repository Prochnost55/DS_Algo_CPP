#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <sstream>

using namespace std;
void printVector(vector<string> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

void reverseString(vector<string>& s) {
        for(int i = 0; i < s.size()/2; i++){
            // swap(s[i], s[s.size()-1-i]);
            cout << s[i] << s[s.size()-1-i] << endl;
        }
    }
int main(){
    // string str = "12+34";
    // cout << minimizeResult(str) << endl;
    vector<string> s {"A"," ","m","a","n",","," ","a"," ","p","l","a","n",","," ","a"," ","c","a","n","a","l",":"," ","P","a","n","a","m","a"};
    // vector<string> s {"A","b","C","d"};

    reverseString(s);
    printVector(s);
}