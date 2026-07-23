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
int n; cin >> n;
vector<string>s(n);
for(int i=0; i<n ;i++){
    cin >> s[i];
}
string answer=s[0];
for(int i=1; i<n; i++){
    if(answer+s[i] > s[i]+answer) answer = s[i]+answer;
    else answer = answer+s[i];
}
cout << answer << "\n";
}
}