#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include <cstdint>
#define int long long
using namespace std;
int32_t main(){
    int n=3001;
vector<int>a(n,0);
for(int i=2; i<=n/2; i++){
    if(a[i]==0){
        for(int j=2; j<= n/i; j++){
            a[i*j]++;
        }
    }
}
int x; cin >> x;
int answer=0;
for(int i=1;i<=x; i++){
if(a[i]==2) answer++;
}
cout << answer;
}