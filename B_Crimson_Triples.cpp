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
#include<set>
#include <cstdint>
#define loop(i,n) for(long long i=0;i<n;i++)
#define endl "\n"
#define int long long
using namespace std;
int32_t main(){
int T=1; cin >> T;
while(T--){
int n; cin >> n;
vector<vector<int> >a(n+1);
vector<int>size(n+1,0);
for(int i=1; i<=n; i++){
    for(int j=i; j<=n; j+=i){
        a[j].push_back(i);
        size[j]++;
    }
}
int ans=0;
for(int i=1; i<=n; i++){
    for(auto x:a[i]){
        ans+=(i/x)*2 - 1;
        
    }
}

cout << ans << endl;
//END OF while(T--)
}
}