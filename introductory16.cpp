#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> vec(n+1, -1);
    long long total = 0;
    for(long long i = 1; i < n+1; i++) {
        cin >> vec[i];
        total += vec[i];
    }

    long long ans = INT64_MAX;
    for(long long i = 0; i < (1 << n); i++) {
        long long sum = 0;
        for(long long j = 0; j < n; j++) {
            if(i & (1 << j)) {
                sum += vec[j+1];
            }
        }
        ans = min(ans, abs(total-2*sum));
    }
    cout << ans;

    return 0;
}