#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#include<numeric>
#include<tuple>
#include<queue>
#include <cstdint>
#include<set>
#define loop(i,n) for(long long i=0;i<n;i++)
#define endl "\n"
#define int long long
using namespace std;
int32_t main(){
int T=1; cin >> T;
while(T--){
int n; cin >> n;
vector<int>v(n);
for(int i=0; i<n; i++)cin >> v[i];

bool one=false,two=false;
int a=0,b=0,c=0,x=0,y=0,z=0;
bool yes=false;
for(int i=0; i<n; i++){
    if(one){
        if(v[i]!=3){
            two=true;
        }
        if(two){
            if(v[i]==1)x++;
            if(v[i]==2)y++;
            if(v[i]==3)z++;
            if((x+y)>=z && i!=(n-1)){
                yes=true;break;
            }
        }
        else{
            if(a>(b+c)){
                c++;
            }
            else{
                two=true;
                z++;
            }
        }
    }
    else{
        if(v[i]==1)a++;
        if(v[i]==2)b++;
        if(v[i]==3)c++;
        if(a>=(b+c))one=true;
    }
}
 
//END OF while(T--)
}
}