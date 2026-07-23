#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include <cstdint>
#include<algorithm>
#include<numeric>
#include<tuple>
#include<queue>
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
string s; cin >> s;
int max=0;
int x=0;
for(int i=0; i<n; i++){
    if(s[i]=='#')x++;
    if(s[i]=='*' || i==(n-1)){
        if(x>max)max=x;
        x=0;
    }
}
cout << (max+1)/2;
cout << endl;
//END OF while(T--)
}
}



