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
int32_t main(){
int T=1; //cin >> T;
while(T--){
int n,m; cin >> n >> m;
vector<vector<int> >a(n,vector<int>(m,0));
vector<int>li(n,m),ri(n,-1),lj(m,n),rj(m,-1);
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin >> a[i][j];

        if(a[i][j]==1){
            ri[i]=j;
            rj[j]=i;
            if(lj[j]==n)lj[j]=i;
            if(li[i]==m)li[i]=j;
        }

    }
}
int ans=0;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(a[i][j]==1)continue;
        if(li[i]<=ri[i]){
            if(j<li[i])ans++;
            else if(j>ri[i])ans++;
            else if(j>li[i]&& j<ri[i])ans+=2;
        }
        if(lj[j]<=rj[j]){
            if(i<lj[j])ans++;
            if(i>rj[j])ans++;
            if(i>lj[j]&& i<rj[j])ans+=2;
        }
    }
}
cout << ans << endl;
//END OF while(T--)
}
}