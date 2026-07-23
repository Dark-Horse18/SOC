#include<iostream>
#include<vector>
#include<string>
#include<map>
#include <cstdint>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n;cin>>n;
vector<int>a(n);
int max=0;
for(int i=0; i<n; i++){
    cin >> a[i];
    if(a[i]>max) max =a[i];
}
cout << max*n << endl;

}
}