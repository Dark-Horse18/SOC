#include<iostream>
#include<set>

using namespace std;

int main(){
    long long n;
    cin >> n;
    set<long long> s;
    int count = 0;
    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
}