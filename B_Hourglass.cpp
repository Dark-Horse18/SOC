#include<iostream>
#include <cstdint>
#include<vector>
#include<string>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int s,k,m; cin >> s >> k >> m;
int ans;
int rem = m%k;
if(s<=k){
   if(rem >= s)ans =0;
   else ans = s - rem;
}
else{
        if((m/k)%2==0){
            ans = s-rem;
        }
        else ans = k-rem;
    
}
cout << ans << "\n";
}
}