#include<iostream>
// #include<map>
// #include<vector>
#include <algorithm>

using namespace std;
void printArray(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

void increase(int* arr, int len){
    for (int i = 0; i< len; i++){
        arr[i] += 1;
    }
}
// TLE - test 3
int main(){
    int t;cin >> t;
    while(t>0){
        t--;
        int len; int budget; cin >> len >> budget;
        int *arr = new int[len];
        int count = 0;
        int minPrice = 0;
        for (int x = 0; x < len; x++) {
	    	cin >> arr[x];
            minPrice = min(minPrice, arr[x]);
	    }
        sort(arr, arr+len);

        while(minPrice <= budget){
            int expense = 0;
            
            for (int i = 0; i < len; i++){
                if(arr[i] <= (budget-expense)){
                    count++;
                    expense += arr[i];
                }
            }
            increase(arr, len);
            minPrice++;
        }

        cout << count << endl;
    }
}
void increase(int* arr, int len){
    for (int i = 0; i< len; i++){
        arr[i] += (i+1);
    }
}

// int findClosest(int* arr, int len, int target){
//     int s = 0;
//     int e = len - 1;
//     int m = e - (e-s)/2;
//     while(s<=e){
//         if(arr[m] == target){
//             return m;
//         }
//         if(arr[m] < target){
//             s = m+1;
//         }
        
//         if(arr[m] > target){
//             e = m-1;
//         }
//         m = e - (e-s)/2;
//     }
    
//     return m;
// }

// void convert(int* arr, int len, int budget){
//     // int e = 0;
//     for (int x = 1; x < len; x++){
//         arr[x] += arr[x-1];
//         // if(arr[x] >= budget){
//         //     e = x;
//         // }
//     }
// }
// wasn't able to optmize further
// int main(){
//     int t;cin >> t;
//     while(t>0){
//         t--;
//         int len; int budget; cin >> len >> budget;
//         int *arr = new int[len];

//         int count = 0;
//         int minPrice = 0;
        
//         for (int x = 0; x < len; x++) {
//             cin >> arr[x];
//             minPrice = min(minPrice, arr[x]);    
// 	    }
        
//         sort(arr, arr+len);
//         convert(arr, len, budget);

//         while(minPrice <= budget){
//             count += findClosest(arr, len, budget)+1;
//             increase(arr, len);
//             minPrice++;
//         }

//         cout << count << endl;
//     }
// }