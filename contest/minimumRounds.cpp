#include <iostream>
#include <vector>
#include <map>


int minimumRounds(vector<int>& tasks) {
    int count = 0;
    map<int, int> taskMap;
    for(auto task: tasks){
        ++taskMap[task];    
    }
    
    for (auto itr = taskMap.begin(); itr != taskMap.end(); ++itr) {
        if(itr->second == 1) return -1;
        count += (itr->second + 2) / 3;
        
    }
    return count;
}

int main(){
    vector<int> tasks {66,66,63,61,63,63,64,66,66,65,66,65,61,67,68,66,62,67,61,64,66,60,69,66,65,68,63,60,67,62,68,60,66,64,60,60,60,62,66,64,63,65,60,69,63,68,68,69,68,61};
    cout << minimumRounds(tasks) << endl;
}