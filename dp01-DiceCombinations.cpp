#include <bits/stdc++.h>
using namespace std;


#ifdef LOCALS
#include "algo/debug.h"
#else
#define debug(x...)
#endif

long long MOD = 1e9+7;

void solve() {
    long long n;
    cin >> n;
    vector<long long> dp(n+1);
    dp[0] = 1;
    for(long long i = 1; i <= n; i++) {
        for(long long j = 1; j <= 6 && i-j >= 0; j++) {
            dp[i] = (dp[i-j] + dp[i]) % MOD;
        }
    }
    cout << dp[n] << "\n";
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