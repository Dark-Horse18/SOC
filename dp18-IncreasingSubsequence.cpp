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
	vector<long long> vec(n);
	for(long long i = 0; i < n; i++) cin >> vec[i];
	vector<long long> tails;
	for(long long i = 0; i < n; i++) {
		auto it = lower_bound(tails.begin(), tails.end(), vec[i]);
		if(it == tails.end()) {
			tails.push_back(vec[i]);
			continue;
		}
		*it = min(*it, vec[i]);
	}
	cout << tails.size() << "\n";
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