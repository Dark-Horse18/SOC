#include<iostream>
using namespace std;

int main(){
    int t = 0;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> y >> x;
        long long k = max(x, y);
        if(k % 2 == 1) {
            // up
            if(k == y) {
                cout << (k-1)*(k-1) + x << "\n";
            }
            else{
                cout << (k-1)*(k-1) + 2*k - y << "\n";
            }
        }
        else{
            // down
            if(k == y) {
                cout << (k-1)*(k-1) + 2*k - x << "\n";
            }
            else{
                cout << (k-1)*(k-1) + y << "\n";
            }
        }
    }
}