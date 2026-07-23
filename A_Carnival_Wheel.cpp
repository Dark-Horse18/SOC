#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include <cstdint>
#include<cmath>
#include<algorithm>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int l,a,b; cin >> l >> a >> b;
int max=0;
for(int i=0; i<l; i++){
if((a+i*b)%l > max) max = (a+i*b)%l; 
}
cout << max << "\n";
}
}