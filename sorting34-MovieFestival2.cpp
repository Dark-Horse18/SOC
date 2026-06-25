#include <bits/stdc++.h>
using namespace std;


// #ifdef LOCALS
// #include "algo/debug.h"
// #else
// #define debug(x...)
// #endif

void solve() {
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> movies(n);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		movies[i] = {b, a};
	}
	sort(movies.begin(), movies.end());
	multiset<int> avail;
	for (int i = 0; i < k; i++) {
		avail.insert(0);
	}
	long long ans = 0;
	for (auto &[end, start] : movies) {
		auto it = avail.upper_bound(start);
		if (it == avail.begin()) continue;
		--it;
		avail.erase(it);
		avail.insert(end);
		ans++;
	}
	cout << ans << '\n';
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