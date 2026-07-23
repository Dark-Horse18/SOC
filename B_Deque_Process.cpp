#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include <cstdint>
#include<algorithm>
#define int long long
using namespace std;
int32_t main(){
int t; cin >> t;
while(t--){
int n; cin >> n;
vector<int>v(n);
for(int i=0; i<n; i++)cin >> v[i];
string s;
int current = 0;
for(int i=0; i<n/2; i++){
    if(v[i]>current){
        if(v[n-1-i]>v[i]){
            s= s + "RL";
            current = v[i];
        }
        else {s=s + "LR";
        current = v[n-i-1];
        }
    }
    else{
        if(v[n-1-i]>v[i]) {s+= "LR";
        current = v[n-i-1];
        }
        else {s+= "RL";
        current = v[i];
        }
    }

}
if(n%2==1) s+= "R";
cout << s << "\n";
}
}