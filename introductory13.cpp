#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

vector<string> create(long long n) {
    if(n == 1){
        return {"0", "1"};
    }
    vector<string> prev = create(n-1);
    vector<string> ans;
    for(int i = 0; i < prev.size(); i++) {
        ans.push_back(prev[i] + "0");
    }
    reverse(prev.begin(), prev.end());
    for(int i = 0; i < prev.size(); i++) {
        ans.push_back(prev[i] + "1");
    }
    return ans;
}

int main(){
    long long n;
    cin >> n;
    vector<string> vec = create(n);
    for(int i = 0; i < (1 << n); i++){
        cout << vec[i] << "\n";
    }
}
