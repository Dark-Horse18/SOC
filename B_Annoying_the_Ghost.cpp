#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#include<numeric>
#include <cstdint>
#include<tuple>
#include<queue>
#include<set>
#define loop(i,n) for(long long i=0;i<n;i++)
#define endl "\n"
#define int long long
using namespace std;
int32_t main(){
int T=1; cin >> T;
while(T--){
int n; cin >> n;
vector<int>a(n),b(n);
for(int i=0; i<n; i++){
    cin >> a[i];
}
for(int i=0; i<n; i++){
    cin >> b[i];
}

int ans=0;
vector<bool>done(n,false);

for(int i=0; i<n; i++){
    int x=b[i];
    for(int j=0; j<n; j++){
        if(!done[j]){
            if(a[j]<=x){
                done[j]=true;
                a[j]=x;
                break;
            }
        }
    }
}

for(int i=n-1; i>0; i--){
    for(int j=0; j<i; j++){
        if(a[j+1]<a[j]){
            int x=a[j];
            a[j]=a[j+1];
            a[j+1]=x;
            ans++;
        }
    }
}
bool yes=true;
loop(i,n){
    if(a[i]!=b[i]){
        yes=false;
        break;
    }
}

if(yes)cout << ans << endl;
else cout << -1 << endl;
//END OF while(T--)
}
}