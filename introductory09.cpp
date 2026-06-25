#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long mod = pow(10, 9) + 7;
    int ans = 1;
    while(n--){
        ans *= 2;
        ans = ans % mod;
    }
    cout << ans;
}