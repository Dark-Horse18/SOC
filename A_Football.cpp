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
int n; cin >> n;
map<string, int>freq;
for(int i=0; i<n; i++){
    string s; cin >> s;
    freq[s]++;
}
int max = 0;
string winner;
for(auto x : freq){
    if(x.second > max){
        max = x.second;
        winner = x.first;
    }
}
cout << winner;
}