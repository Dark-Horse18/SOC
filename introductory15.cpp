#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> vec;
    do
    {
        vec.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << vec.size() << "\n";
    for(long long i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\n";
    }
}