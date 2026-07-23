#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#include <cstdint>
#define int long long
using namespace std;
int32_t main(){
map<int, int>f;
for(int i=0; i<4 ;i++){
    int x; cin >> x;
    f[x]++;
}
int ans=0;
for(auto i : f){
    ans = ans+(i.second-1);
}
cout << ans;
}