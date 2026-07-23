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
int pow(int a,int b, int p){
    int ans=1;
    a=a%p;
    while(b>0){
        if(b&1)ans=(ans*a)%p;
        a=(a*a)%p;
        b=b/2;
    }
    return ans;
}

int32_t main(){
int T=1; cin >> T;
while(T--){
int n,m,r,c; cin >> n>>m>>r>>c;
int N=998244353;
int ans=0;
ans+=((pow(2,r*c-1,N)%N*pow(2,(r-1)*(m-c),N)%N)%N*pow(2,(c-1)*(n-r),N)%N)%N;


cout << ans << endl;
//END OF while(T--)
}
}