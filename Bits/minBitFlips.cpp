#include <iostream>
#include <vector>

using namespace std;
void printVector(vector<string> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};
int minBitFlips(int start, int goal) {
        int count = 0;
        while(start != 0 || goal !=0){
            if((start&1) != (goal&1)){
                count++;
            }
            start = (start >> 1);
            goal = (goal >> 1);
        }
        
        return count;
    }
int main(){
   cout << minBitFlips(3, 4) << endl;
}