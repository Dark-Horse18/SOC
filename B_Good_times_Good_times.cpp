#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#include <cstdint>
#include<numeric>
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
int ans=1;

string s= to_string(n);
s+=s;
int x = stoll(s);
ans= x/n;
cout << ans << endl;

//cout << endl;
//END OF while(T--)
}
}