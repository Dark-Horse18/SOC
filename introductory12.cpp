#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> arrc;
    vector<long long> arrv;
    // map<char, int>;
    long long count_odd = 0;
    for(int i = 0; i < s.size(); i++){
        bool found = false;
        for(int j = 0; j < arrc.size(); j++){
            if(s[i] == arrc[j]) {
                found = true;
                arrv[j]++;
                if(arrv[j] % 2 == 0) count_odd--;
                else count_odd++;
            }
        }
        if(found == false) {
            arrc.push_back(s[i]);
            arrv.push_back(1);
            count_odd++;
        }
    }

    if(count_odd > 1) {
        cout << "NO SOLUTION";
        return 0;
    }
    else{
        char ans[s.size()+1];
        ans[s.size()] = '\0';
        int front = 0;
        int oddindex = -1;
        for(int i = 0; i < arrc.size(); i++) {
            if(arrv[i] % 2 == 0) {
                while(arrv[i] > 0) {
                    ans[front] = arrc[i];
                    ans[s.size()-1-front] = arrc[i];
                    arrv[i] -= 2;
                    front++;
                }
            }
            else{
                oddindex = i;
            }
        }
        if(oddindex != -1){
            int n = s.size()-1-front;
            for(int i = front; i <= n; i++) {
                ans[i] = arrc[oddindex];
            }
        }
        cout << ans;
    }
}