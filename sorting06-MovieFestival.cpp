#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<pair<long long, long long>> vec(n);  // end, start
    for(long long i = 0; i < n; i++) {
        cin >> vec[i].second;
        cin >> vec[i].first;
    }
    sort(vec.begin(), vec.end());
    long long count = 0;
    long long prevEnd = 0;
    for(long long i = 0; i < n; i++) {
        if(prevEnd <= vec[i].second) {
            count++;
            prevEnd = vec[i].first;
        }
    }
    cout << count;
}