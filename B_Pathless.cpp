#include<iostream>
#include<vector>
#include <cstdint>
#include<string>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n, s; cin >> n >> s;
vector<int>a(n);
vector<int>f(3,0);
bool possible;
int sum=0;
for(int i=0; i<n; i++){
    cin >> a[i];
    sum += a[i];
    f[a[i]]++;
}
s=s-sum;
if(s<0){possible = false;}
else if(s==0|| s>1){possible = true;}
else{
possible = false;
for(int i=0; i<f[0]; i++)a[i]=0;
for(int i=f[0]; i<f[0]+f[2]; i++)a[i]=2;
for(int i=f[0]+f[2]; i<n; i++)a[i]=1;
}
if(possible) cout << "-1" << endl;
else{
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
}
}
}