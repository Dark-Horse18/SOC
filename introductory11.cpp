#include<iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n1, n2;
        cin >> n1 >> n2;
        if((n1+n2) % 3 == 0 && max(n1,n2) <= 2*min(n1,n2)) cout << "YES\n";
        else cout << "NO\n";
    }
}