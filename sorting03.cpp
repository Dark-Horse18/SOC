#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n, limit;
    cin >> n >> limit;
    vector<long long> vec(n);
    for(long long i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    long long i = 0;
    long long j = n - 1;
    long long count = 0;
    while(j >= i) {
        if(i == j){
            count++;
            j--;
            i++;
            continue;
        }
        if(vec[i] + vec[j] <= limit){
            count++;
            i++;
            j--;
        }
        else{
            count++;
            j--;
        }
    }
    cout << count;
}