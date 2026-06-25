#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n <= 3 && n >= 2) {
        cout << "NO SOLUTION";
        return 0;
    }
    else if(n == 4){
        cout << "3 1 4 2";
        return 0;
    }
    vector<int> vec(n);
    for(int i = 0; i < n; i = i + 2) {
        vec[i] = n - i / 2;
    }
    for(int i = 1; i < n; i = i + 2) {
        vec[i] = n / 2 - i / 2;
    }
    for(int i = 0; i < n; i ++) {
        cout << vec[i] << " ";
    }
}