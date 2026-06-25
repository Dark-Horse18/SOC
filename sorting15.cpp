#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x, n;
    cin >> x >> n;
    set<long long> positions;
    multiset<long long> lengths;
    lengths.insert(x);
    positions.insert(0);
    positions.insert(x);
    for(long long i = 0; i < n; i++) {
        long long p;
        cin >> p;
        auto it = positions.upper_bound(p);
        auto et = (--it);
        it++;

        auto dl = lengths.find(*it-*et);
        lengths.erase(dl);
        lengths.insert(p-*et);
        lengths.insert(*it-p);
        positions.insert(p);
        cout << *(--lengths.end()) << " ";
    }
}