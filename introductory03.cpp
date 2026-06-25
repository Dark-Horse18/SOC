#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int maxrep = 0;
    int count = 0;
    char curr = s[0];
    for(int i = 0; i < s.size(); i++) {
        if(curr == s[i]) {
            count++;
            maxrep = max(maxrep, count);
        }
        else{
            count = 1;
            curr = s[i];
        }
    }
    cout << maxrep;
}