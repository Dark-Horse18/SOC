#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> vec(n);
    for(long long i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    long long limit = 0;
    for(long long i = 0; i < n; i++) {
        if(vec[i] > limit + 1) {
            cout << limit + 1;
            return 0;
        }
        limit += vec[i];
    }
    cout << limit + 1;
}