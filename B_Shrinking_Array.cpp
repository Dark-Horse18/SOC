#include<iostream>
#include<vector>
#include<string>
#include <cstdint>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n; cin >> n;
vector<int>a(n);
for(int i=0; i<n;i++){
    cin >> a[i];
}
bool yes= false;
for(int i=0; i<n-1;i++){
    if(abs(a[i+1]-a[i]) <= 1 ){
        yes = true;
        break;
    }
}
if(yes) cout << 0 << "\n";
else{
    bool sorted= true;
    for(int i=1; i<n-1; i++){
        if((a[1]-a[0])*(a[i+1]-a[i]) < 0){
            sorted = false;
            break;
        }
    }
    if(sorted) cout << -1 << "\n";
    else cout << 1 << "\n";
}
}
}