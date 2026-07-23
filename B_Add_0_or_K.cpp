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
int n,k; cin >> n >> k;
vector<int>a(n);
for(int i=0; i<n; i++){
    cin >> a[i];
}
for(int i=0; i<n; i++){
    int rem=a[i]%(k+1);
    if(rem!=0){
        a[i]+=rem*k;
    }
}

for(int i=0; i<n; i++){
    cout << a[i] << " ";
}
cout << endl;
}
}