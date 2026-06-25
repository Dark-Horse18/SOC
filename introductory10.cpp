#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long count = 0;
    int d = 5;
    while(n >= d){
        count += n / d;
        d *= 5;
    }
    cout << count;
}