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
int zero=0;
for(int i=0; i<n; i++){
    cin>>a[i];
    if(a[i]==0)zero++;
}
if(zero!=1){
int l=n-1,r=n-1;
for(int i=0; i<n; i++){
    if(a[i] != i+1){
        l=i;
        break;
    }
}
for(int j=n-1; j>=0 ;j--){
    if(a[j] != j+1){
        r=j;
        break;
    }
}
int answer = r-l+1;
if(answer==1) answer=0;
cout << answer << "\n";
}
else{
   int sum = n*(n+1)/2 ;
   for(int i=0; i<n; i++){
    sum = sum-a[i];
   }
   int l=n-1,r=n-1;
for(int i=0; i<n; i++){
    if(a[i]==0){
       if(i != sum-1){ l=i;
        break;}
    }
    else if(a[i] != i+1){
        l=i;
        break;
    }
}
for(int j=n-1; j>=0 ;j--){
    if(a[j]==0){
       if(j != sum-1) {r=j;
        break;}
    }
    else if(a[j] != j+1){
        r=j;
        break;
    }
}
int answer = r-l+1;
if(answer==1) answer=0;
cout << answer << "\n";
}
}
}