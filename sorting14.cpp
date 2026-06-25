#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<long long> s;
    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        auto it = s.upper_bound(x);
        if(it == s.end()) {
            s.insert(x);
        }
        else{
            s.erase(it);
            s.insert(x);
        }
    }
    cout << s.size();
}