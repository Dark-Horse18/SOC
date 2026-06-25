#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long rounds = 1;
    vector<long long> pos(n+1);
    for(long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        pos[x] = i;
    }
    for(long long i = 1; i < n; i++){
        if(pos[i+1] < pos[i]) rounds++;
    }
    cout << rounds;
}