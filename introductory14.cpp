#include<iostream>
using namespace std;

void towerOfHanoi(int source, int target, int helper, int n){
    if(n == 1){
        cout << source << " " << target << "\n";
        return;
    }
    towerOfHanoi(source, helper, target, n-1);
    cout << source << " " << target << "\n";
    towerOfHanoi(helper, target, source, n-1);
}

int main(){
    long long n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    towerOfHanoi(1, 3, 2, n);
}