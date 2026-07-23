#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#include<numeric>
#include <cstdint>
#define int long long
using namespace std;
int32_t main(){
int T; cin >> T;
while(T--){
string s,t,ans; cin >> s >> t;
vector<int>fs(26,0),f(26,0);
for(auto x:s){
    fs[x-'a']++;
}
for(auto x:t){
    f[x-'a']++;
}
bool possible = true;
for(int i=0; i<26; i++){
    f[i]=f[i]-fs[i];
    if(f[i]<0){
        possible = false;
        break;
    }
}
if(!possible) cout << "Impossible" << endl;
else{
    int index=0;
    for(int i=0; i<26; i++){
        while(true){
            if(index>=s.size()){
                s.insert(s.size(),f[i],'a'+i);
                index=s.size();
                break;
            }
            else if(s[index]>'a'+i){
                s.insert(index,f[i],'a'+i);
                index+=f[i];
                break;
            }
            else{index++;}
        }
    }
    cout << s << endl;
}

}
}