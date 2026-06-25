#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    multiset<long long> s;
    for(long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }
    vector<long long> vec(m);
    for(long long i = 0; i < m; i++){
        cin >> vec[i];
    }
    for(int i = 0; i < m; i++){
        auto it = s.upper_bound(vec[i]);
        if(it == s.begin()){
            cout << "-1\n";
        }
        else{
            it--;
            cout << *it << "\n";
            s.erase(it);
        }
    }
}