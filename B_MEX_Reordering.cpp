#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include <cstdint>
#include<algorithm>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n; cin >> n;
vector<int>a(n),f(n+1,0);
for(int i=0; i<n; i++){
    cin >> a[i];
    f[a[i]]++;
}
int mex=n+1;
bool yes;
for(int i=0; i<n+1; i++){
    if(f[i]==0){
        mex = i;
        break;
    }
}
if(mex==0) yes= false;
else if(mex==1){
    if(f[0]==1) yes=true;
    else yes=false;
}
else{
    yes=true;
}
if(yes) cout << "YES\n";
else cout << "NO\n";
}
}