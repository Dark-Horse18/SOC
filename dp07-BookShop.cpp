#include <bits/stdc++.h>
using namespace std;


#ifdef LOCALS
#include "algo/debug.h"
#else
#define debug(x...)
#endif

void solve() {
    long long n, x;
    cin >> n >> x;
    vector<long long> price(n+1);
    vector<long long> pages(n+1);
    for(long long i = 1; i <= n; i++) cin >> price[i];
    for(long long i = 1; i <= n; i++) cin >> pages[i];
    vector<long long> prev(x+1);
    vector<long long> curr(x+1);
    for(long long i = 1; i <= n; i++) {
        for(long long money = 1; money <= x; money++) {
            curr[money] = max(curr[money], prev[money]);
            if(money-price[i] >= 0) curr[money] = max(curr[money], prev[money-price[i]]+pages[i]);
        }
        swap(curr, prev);
        curr.assign(x+1, 0);
    }
    cout << prev[x] << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;   // remove if single test case
    while (t--) {
        solve();
    }

    return 0;
}