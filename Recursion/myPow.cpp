#include <iostream>
using namespace std;

// f(x,n) = x^n;

double myPow(double x, int n) {
    if(n<0) return (1/x) * myPow(x, n+1);
    if(n==0) return 1;
    return x * myPow(x, n-1);
}

int main(){
    int x, n;
    cin >> x >> n;
    cout << myPow(x,n) << endl;
}