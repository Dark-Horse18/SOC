#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include <cstdint>
#include<algorithm>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n; cin >> n;
vector<int>a(n),b(n);
for(int i=0; i<n; i++) cin >> a[i];
for(int i=0; i<n; i++) cin >> b[i];
int min1=0, max1=0, min2=0, max2=0;
for(int i=0; i<n; i++){
    min1=min2; max1=max2;
    max2 = max(max1-a[i], b[i]-min1);
    min2 = min(min1 - a[i], b[i] - max1);
}
cout << max2 << endl;
}
}