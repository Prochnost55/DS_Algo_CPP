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

string minimizeResult(string str) {
    int plusIndex = str.find('+');
    int resDiff = 0;
    int sum = INT_MAX;
        
    int num1 = 0;
    int num2 = 0;
    
    vector<int> sums;
    int rightLen = str.length() - plusIndex;
    
    for (int i = 0; i < min(plusIndex, rightLen); i++){
    
        int start = 0;
        stringstream startStr(str.substr(0, plusIndex - i));
        startStr >> start;
        
        if(i!=0){
            stringstream num1Str(str.substr(plusIndex-i,     plusIndex));
            num1Str >> num1;
    
            stringstream num2Str(str.substr(plusIndex+1, i));
            num2Str >> num2;
        }
        
        int end = 0;
        stringstream endStr(str.substr(plusIndex+1+i));
        endStr >> end;

        int tempSum = 0;
        if(num1+num2 == 0){
            tempSum = start+end;
        }else{
            if(end == 0){end++;};
            if(start == 0){start++;};
            tempSum = start * (num1+num2)*end;
        }

        if(tempSum < sum){
            sum = tempSum;
            resDiff = i;
        }
    }
    if(resDiff > 0){
        str.insert((plusIndex++)-resDiff, "(");
        str.insert(plusIndex+resDiff+1, ")");
    }else{
        str.insert(0, "(");
        str.insert(str.length(), ")");
    }
    return str;
}


int main(){
    string str = "12+34";
    cout << minimizeResult(str) << endl;
   
}