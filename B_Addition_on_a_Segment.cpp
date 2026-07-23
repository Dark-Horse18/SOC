#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#include <cstdint>
#include<numeric>
#define int long long
using namespace std;
int32_t main(){
int T; cin >> T;
while(T--){
int n; cin >> n;
vector<int>a(n);
for(int i=0; i<n; i++){
    cin >> a[i];
}
sort(a.rbegin(), a.rend());
int sum = 0,index=0;
for(int i=0; i<n; i++){
sum+=a[i];
}
int zero=0;
for(int i=n-1; i>=0; i--){
if(a[i]==0)zero++;
else break;
}
cout << min(n-zero, sum +1-n) << "\n";

}
}