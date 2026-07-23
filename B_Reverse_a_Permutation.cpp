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
int start=n,end=n;
for(int i=0; i<n; i++){
    cin >> a[i];
}
for(int i=0; i<n; i++){
    if(a[i]!=n-i){
        start=i;
        break;
    }
}
for(int i=start+1; i<n;i++){
    if(a[i]==n-start){
        end = i;
        break;
    }
}
int length=end - start+1;
for(int i=0; i<length/2; i++){
    int x = a[start+i];
    a[start+i]=a[end-i];
    a[end-i]=x;
}

for(int i=0; i<n; i++){
    cout << a[i] << " ";
}
cout << "\n";
}
}