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
int t; cin >> t;
while(t--){
int n; cin >> n;
vector<int>a(n);
for(int i=0; i<n; i++) cin >> a[i];
vector<int>x(n-n/2),y(n/2);
for(int i=0; i<n-n/2; i++){
    x[i]=a[2*i];
}
for(int i=0; i<n/2; i++){
    y[i]=a[2*i+1];
}
sort(x.begin(),x.end());
sort(y.begin(),y.end());
bool yes=true;
if(n%2==1){
    for(int i=0; i<n/2; i++){
        if(x[i]>y[i] || y[i]>x[i+1]){
            yes=false;
            break;
        }
    }
}
else{
    if(x[0]<y[0]){
        for(int i=0; i<n/2; i++){
            if(i != n/2-1){
        if(x[i]>y[i] || y[i]>x[i+1]){
            yes=false;
            break;
        }}
        else{
            if(x[i]>y[i]){
            yes=false;
            break;
        }
        }
    }
    }
    else{
        for(int i=0; i<n/2; i++){
            if(i != n/2-1){
        if(y[i]>x[i] || x[i]>y[i+1]){
            yes=false;
            break;
        }}
        else{
            if(y[i]>x[i]){
            yes=false;
            break;
        }
        }
    }
    }
}
if(yes) cout << "YES\n";
else cout << "NO\n";
}
}