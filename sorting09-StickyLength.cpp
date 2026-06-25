#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> vec(n, -1);
    for(long long i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    long long get = vec[n/2];
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        sum += abs(get-vec[i]);
    }
    cout << sum;
}