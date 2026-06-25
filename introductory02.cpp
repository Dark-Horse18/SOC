#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long total_sum = n * (n + 1) / 2;
    long long sum = 0;
    while(--n){
        int x;
        cin >> x;
        sum += x;
    }
    cout << total_sum - sum;
}