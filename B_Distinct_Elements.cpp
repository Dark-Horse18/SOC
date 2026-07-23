#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include <cstdint>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n; cin >> n;
vector<int>b(n),a(n);
for(int i=0; i<n; i++) cin >> b[i];
a[0]=1;
for(int i=1; i<n; i++){
    if(b[i]-b[i-1]>i) a[i]=i+1;
    else{
        a[i]=a[i-b[i]+b[i-1]];
    }
}
for(int i=0; i<n; i++) cout << a[i] << " ";
cout << endl;
}
}