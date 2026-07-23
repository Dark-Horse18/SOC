#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#include<numeric>
#include<tuple>
#include<queue>
#include <cstdint>
#include<set>
#define loop(i,n) for(long long i=0;i<n;i++)
#define endl "\n"
#define int long long
using namespace std;

int bitLength(int n) {
    int count = 0;
    while (n > 0) {
        n >>= 1;
        count++;
    }
    return count;
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
vector<int>a(n+1);
for(int i=1; i<=n; i++){
    cin >> a[i];
}

bool yes=true;
for(int i=1; i<n; i++){
    if(a[i]<i){
        yes=false;
        break;
    }
    int x=a[i]-i;
    a[i]-=x;
    a[i+1]+=x;
}
if(n!=1 && yes){
    if(a[n]<=a[n-1]){
        yes=false;
    }
}
if(yes)cout << "YES";
else cout << "NO";
cout << endl;
//END OF while(T--)
}
}



