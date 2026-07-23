#include<iostream>
#include<vector>
#include<string>
#include <cstdint>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n; cin >> n;
vector<int>a(n);
int win;
for(int i=0; i<n; i++){
    cin >> a[i];
}
if(n==1){
    if(a[0]==0) win = 0;
    else win = 1; 
}
else if(n==2){
    if(a[0]==1&&a[1]==1) win =0;
    else win = 1;
}
else{
    if(a[0]==0&&a[n-1]==0) win =1;
    else win = 0;
}
if(win ==0) cout << "Alice" << "\n";
else cout << "Bob" << "\n";
}
}