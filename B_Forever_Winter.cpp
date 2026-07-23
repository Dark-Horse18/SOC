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
int n,m; cin >> n >> m;
vector<int>d(n+1,0);
int x=-1;
for(int i=0; i<m; i++){
    int a,b; cin >> a >> b;
    if(d[a]==1)x++;
    if(d[b]==1)x++;
    d[a]++;
    d[b]++;
}
int y = (n-1-x)/x;

cout << x << " " << y;
cout << endl;
//END OF while(T--)
}
}