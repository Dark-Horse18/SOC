#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    map<long long, long long> m;
    long long last_d = 0;
    long long curr = 0;
    long long m_curr = 0;
    for(long long i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        if(! m[x]) {
            curr++;
            m_curr = max(m_curr, curr);
            m[x] = i;
        }
        else{
            if(m[x] < last_d) {
                curr++;
                m[x] = i;
                m_curr = max(m_curr, curr);
            }
            else{
                last_d = m[x];
                curr = i - last_d;
                m[x] = i;
            }
        }
    }
    cout << m_curr;
}