#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, q;
    cin >> n >> q;
    vector<long long> vec(n+1);
    for(long long i = 1; i <= n; i++) {
        cin >> vec[i];
    }
    vector<long long> ans(n+1);
    for(long long i = 1; i <= n; i++) {
        if(i == 1) ans[i] = vec[i];
        else{
            ans[i] = ans[i-1] + vec[i];
        }
    }
    for(long long i = 0; i < q; i++) {
        long long a, b;
        cin >> a >> b;
        cout << ans[b] - ans[a-1] << "\n";
    }

    return 0;
}