#include<iostream>
using namespace std;

int main(){
    long long k = 0;
    cin >> k;
    for(long long i = 1; i < k + 1; i++) {
        cout << i*i*(i*i-1)/2 - 4*(i-1)*(i-2) << "\n";
    }
}