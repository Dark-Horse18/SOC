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
int n, k; cin >> n >>k;
vector<vector<char> >v(n,vector<char>(n,'U'));
if(k >= n*n-1 && k!= n*n) cout << "NO\n";
else if(k == n*n){
    cout << "YES\n";
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++)cout << v[i][j];
        cout << endl;
    }
}
else{
    int r= k%n;
    int m = k/n;
    if(r==n-1){
        v[m][n-1]='D';
    }
    else{
        v[m][r]='R';
        for(int i=r+1; i<n; i++) v[m][i]='L';
    }
    if(m+1<n){
        for(int i=0; i<r; i++) v[m+1][i]='R';
    }
    cout << "YES\n";
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++)cout << v[i][j];
        cout << endl;
    }
} 
}
}