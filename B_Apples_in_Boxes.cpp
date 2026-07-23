#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include <cstdint>
#define int long long
using namespace std;
string solve(){
int n, k; cin >> n >> k;
vector<int>a(n);
string answer;
for(int i=0; i<n; i++) cin >> a[i];
sort(a.begin(), a.end());
if(a[n-1]-a[0]>k){
    if(a[n-2]==a[n-1]) return "Jerry";
    else if(a[n-1]-1-a[0]>k){
        return "Jerry";
    }
}
int sum=0;
for(int i=0; i<n; i++){
    sum = (sum + a[i]%2)%2;
}
if(sum%2 == 0) return "Jerry";
return "Tom";
}
int32_t main(){
int t; cin >> t;
while(t--){

cout << solve() << "\n";
}
}