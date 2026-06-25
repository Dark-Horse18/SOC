#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long count = 0;
    int ref = arr[0];
    for(int i = 0; i < n; i++) {
        if(ref > arr[i]){
            count += ref - arr[i];
        }
        else ref = arr[i];
    }
    cout << count;
}