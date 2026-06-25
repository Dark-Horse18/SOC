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
	vector<vector<long long>> vec(n+1, vector<long long>(3));
	for(long long i = 1; i <= n; i++) {
		cin >> vec[i][1] >> vec[i][0] >> vec[i][2];
	}
	sort(vec.begin(), vec.end());
	vector<long long> temp(n+1);
	for(long long i = 1; i <= n; i++) temp[i] = vec[i][0];
	vector<long long> dp(n+1);
	for(long long i = 1; i <= n; i++) {
		dp[i] = max(dp[i], dp[i-1]);
		long long it = lower_bound(temp.begin(), temp.end(), vec[i][1])-temp.begin();
		it--;
		dp[i] = max(dp[i], vec[i][2]+dp[it]);
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