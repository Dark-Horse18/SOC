#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include <cstdint>
#include<cmath>
#include<algorithm>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n, m; cin >> n >> m;
vector<vector<int> >v(n);
vector<int>f(m+1,0);
for(int i=0; i<n; i++){
    int x; cin >> x;
    for(int j=0; j<x; j++){
        int y; cin >> y;
        f[y]++;
        v[i].push_back(y);
    }
}
bool possible = true;
for(int i=1;i<=m;i++){
    if(f[i]==0){
        possible = false;
        break;
    }
}
if(!possible){
    cout << "NO\n";
}
else{
int count=0;
for(int i=0; i<n; i++){
    for(auto x: v[i]){
        if(f[x]==1){
            count++;
            break;
        }
    }
}
if(count > n-2) cout << "NO\n";
else cout << "YES\n";
}
}
}