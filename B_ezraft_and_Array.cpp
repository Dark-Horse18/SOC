#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#include<numeric>
#include<tuple>
#include <cstdint>
#include<queue>
#include<set>
#define loop(i,n) for(long long i=0;i<n;i++)
#define endl "\n"
#define int long long
using namespace std;
long long factorial(long long n, long long p) {
    // If n is greater than or equal to the prime p, p divides n!, so remainder is 0
    if (n >= p) {
        return 0;
    }

    long long result = 1;
    for (long long i = 1; i <= n; ++i) {
        result = (result * i) % p; // Prevent overflow by modding at each step
    }
    
    return result;
}
long long power(long long a, long long b, long long mod) {
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}


int32_t main(){
int T=1; cin >> T;
while(T--){
int n; cin >> n;
if(n==1){
    cout << 1;
}
if(n==2){
    cout << -1;
}
if(n>2){
    cout << "1 2 3 ";
    int sum=6;
for(int i=4; i<=n; i++){
    cout << sum << " ";
    sum=2*sum;
}
}
cout << endl;
//END OF while(T--)
}
}