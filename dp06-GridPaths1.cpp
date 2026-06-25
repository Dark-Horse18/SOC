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
    vector<vector<char>> grid(n+1, vector<char>(n+1));
    vector<vector<long long>> dp(n+1, vector<long long>(n+1));
    for(long long x = 1; x <= n; x++) {
        for(long long y = 1; y <= n; y++) {
            cin >> grid[x][y];
        }
    }
    if(grid[1][1] == '.') dp[1][1] = 1;
    for(long long i = 1; i <= n; i++) {
        for(long long j = 1; j <= n; j++) {
            if(grid[i][j] == '.') dp[i][j] += dp[i-1][j] + dp[i][j-1];
            if(dp[i][j] >= MOD) dp[i][j] -= MOD;
        }
    }
    debug(dp);
    cout << dp[n][n] << "\n";
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