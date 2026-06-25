#include <bits/stdc++.h>
using namespace std;


#ifdef LOCALS
#include "algo/debug.h"
#else
#define debug(x...)
#endif

void solve() {
    long long n;
    cin >> n;
    vector<long long> dp(n+1, INT64_MAX);
    dp[0] = 0;
    for(long long i = 1; i <= n; i++) {
        string s = to_string(i);
        for(long long j = 0; j < s.size(); j++) {
            if(j == '0') continue;
            dp[i] = min(dp[i], 1+dp[i-(s[j]-'0')]);
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