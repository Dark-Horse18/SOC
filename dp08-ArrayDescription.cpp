#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    vector<long long> vec(n+1);
    for(long long i = 1; i <= n; i++) {
        cin >> vec[i];
    }

    vector<vector<long long>> dp(n+1, vector<long long>(m+2));

    for(long long x = 1; x <= n; x++) {
        for(long long k = 1; k <= m; k++) {
            if(x == 1) {
                if(vec[x] == 0 || vec[x] == k) {
                    dp[x][k] = 1;
                }
                continue;
            }

            if(vec[x] == 0 || vec[x] == k) {
                dp[x][k] = (dp[x-1][k-1]+dp[x-1][k]+dp[x-1][k+1]) % M;
            }
        }
    }
    long long ans = 0;
    for(long long i = 1; i <= m; i++) {
        ans = (ans + dp[n][i]) % M;
    }
    cout << ans;

    return 0;
}