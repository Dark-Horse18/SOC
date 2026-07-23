#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#include <cstdint>
#include<numeric>
#define int long long
using namespace std;
int32_t main(){
int T; cin >> T;
while(T--){
int n,m; cin >> n >> m;
vector<int>a(n),b(m);
for(int i=0; i<n; i++){
    cin >> a[i];
}
for(int i=0; i<m; i++) cin >> b[i];
int same=0;
for(int i=0; i<n; i++){
    if(binary_search(b.begin(),b.end(),a[i])){
        same++;
    }
}
int A=n-same, B=m-same,ans=0;
if(B>=A){
    ans = 2*A+1;
}
if(B<A){
    ans=2*B+2;
}
cout << ans << endl;
}
}