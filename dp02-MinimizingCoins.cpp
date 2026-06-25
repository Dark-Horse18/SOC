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
    vector<long long> coins(n+1);
    for(long long i = 1; i <= n; i++) cin >> coins[i];
    vector<long long> dp(x+1, INT64_MAX);
    dp[0] = 0;
    for(long long i = 1; i <= x; i++) {
        for(long long j = 1; j <= n; j++) {
            if(coins[j] <= i && dp[i-coins[j]] != INT64_MAX) dp[i] = min(dp[i], 1+dp[i-coins[j]]);
        }
    }
    cout << ((dp[x] == INT64_MAX)? -1 : dp[x]) << "\n";
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