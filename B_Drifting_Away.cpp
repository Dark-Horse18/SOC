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
string s; cin >> s;
int a=0,b=0,c=0;
for(int i=0; i<s.size(); i++){
    if(s[i]=='<')a++;
    if(s[i]=='*')b++;
    if(s[i]=='>')c++;
}
bool infinite=false;
for(int i=0; i<s.size(); i++){
    if(b>1){
        infinite=true;
        break;
    }
    if(i<a && s[i]!='<' || i>=a&& i<a+b && s[i]!='*' || i>=a+b && s[i]!='>'){
        infinite=true;
        break;
    }
}
if(infinite){
    cout << -1 << "\n";
}
else {
    if(a>c){
        cout << a+b << "\n";
    }
    else cout << b+c << "\n";
}
}
}