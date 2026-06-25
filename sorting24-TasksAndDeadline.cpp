#include <bits/stdc++.h>
using namespace std;


// #ifdef LOCALS
// #include "algo/debug.h"
// #else
// #define debug(x...)
// #endif

void solve() {
	long long n;
	cin >> n;
	vector<long long> duration(n);
	long long total = 0;
	for(long long i = 0; i < n; i++) {
		cin >> duration[i];
		long long x;
		cin >> x;
		total += x;
	}
	sort(duration.begin(), duration.end());
	long long curr = 0;
	long long sub = 0;
	for(long long i = 0; i < n; i++) {
		curr += duration[i];
		sub += curr;
	}
	cout << total - sub << "\n";
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