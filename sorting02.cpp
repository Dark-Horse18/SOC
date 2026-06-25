#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> vec_a(n), vec_s(m);
    for(long long i = 0; i < n; i++) {
        cin >> vec_a[i];
    }
    for(long long i = 0; i < m; i++) {
        cin >> vec_s[i];
    }
    sort(vec_a.begin(), vec_a.end());
    sort(vec_s.begin(), vec_s.end());
    long long count = 0;
    while(vec_a.size() != 0 && vec_s.size() != 0) {
        if(vec_a[vec_a.size()-1] < vec_s[vec_s.size()-1] - k){
            vec_s.pop_back();
        }
        else if(vec_a[vec_a.size()-1] > vec_s[vec_s.size()-1] + k){
            vec_a.pop_back();
        }
        else{
            count++;
            vec_a.pop_back();
            vec_s.pop_back();
        }
    }
    cout << count;
}