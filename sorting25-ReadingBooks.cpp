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
    long long sum = 0;
    long long max_t = 0;
    for (long long i = 0; i < n; i++) {
        long long t;
        cin >> t;
        sum += t;
        max_t = max(max_t, t);
    }
    cout << max(sum, 2 * max_t) << "\n";
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