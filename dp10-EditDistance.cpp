#include <bits/stdc++.h>
using namespace std;


#ifdef LOCALS
#include "algo/debug.h"
#else
#define debug(x...)
#endif

void solve() {
	string a, b;
	cin >> a >> b;
	long long sa = a.size();
	long long sb = b.size();
	vector<vector<long long>> dp(a.size()+1, vector<long long>(b.size()+1));
	for(long long i = 0; i <= sa; i++) dp[i][0] = i;
	for(long long i = 0; i <= sb; i++) dp[0][i] = i;
	for(long long i = 1; i <= sa; i++) {
		for(long long j = 1; j <= sb; j++) {
			if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = 1 + min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
		}
	}
	cout << dp[sa][sb] << "\n";
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