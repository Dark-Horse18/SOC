#include<iostream>
#include<vector>
#include<string>
#include <cstdint>
#include <algorithm>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n,k; cin >> n >> k;
vector<int>a(n),d(k);
for(int i=0; i<n; i++)cin >> a[i];
for(int i=0; i<k; i++)cin >> d[i];
sort(d.begin(),d.end());
sort(a.rbegin(),a.rend());
int index=-1,sum=0;
for(int i=0; i<n; i++){
    sum += a[i];
}
for(int i=0; i<k; i++){
index += d[i];
if(index < n) sum = sum - a[index];
else break;
}
cout << sum << "\n";
}
}