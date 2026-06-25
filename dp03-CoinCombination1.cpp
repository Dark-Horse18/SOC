#include <bits/stdc++.h>
using namespace std;


#ifdef LOCALS
#include "algo/debug.h"
#else
#define debug(x...)
#endif

long long MOD = 1e9+7;

void solve() {
    long long n, x;
    cin >> n >> x;
    vector<long long> coins(n+1);
    for(long long i = 1; i <= n; i++) cin >> coins[i];
    vector<long long> dp(x+1);
    dp[0] = 1;
    for(long long sum = 1; sum <= x; sum++) {
        for(long long i = 1; i <= n; i++) {
            if(sum-coins[i] >= 0) dp[sum] = (dp[sum] + dp[sum-coins[i]]);
            if(dp[sum] >= MOD) dp[sum] -= MOD;
        }
    }
    cout << dp[x] << "\n";
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