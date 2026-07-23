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
int k, x; cin >> k >> x;
int a,b,steps=0;
vector<int>ans;
a = x; b = (1LL<<(k+1))-x;
while(a!=b){
steps++;
if(a<b){
    ans.push_back(1);
    int x = a;
    a = 2*a;
    b = b-x;
}
else{
    ans.push_back(2);
    int x = b;
    b = 2*b;
    a = a-x;   
}
}
cout << steps << "\n";
for(int i=steps-1; i>=0; i--){
    cout << ans[i] << " ";
}
cout << "\n";
}
}
