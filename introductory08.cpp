// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     long long n;
//     cin >> n;
//     vector<int> vec1;
//     long long sum = n*(n+1)/2;
//     long long s = n*(n+1)/2;
//     vector<int> vec2;
//     if(sum % 2 != 0) cout << "NO";
//     else{
//         for(int i = n; i > 0; i--) {
//             if(s - i >= sum/2){
//                 vec1.push_back(i);
//                 s -= i;
//             }
//             else{
//                 vec2.push_back(i);
//             }
//         }
//         cout << "YES" << "\n";
//         cout << vec1.size() << "\n";
//         for(int i = 0; i < vec1.size(); i++) cout << vec1[i] << " ";
//         cout << "\n";
//         cout << vec2.size() << "\n";
//         for(int i = 0; i < vec2.size(); i++) cout << vec2[i] << " ";
//     }
// }

#include<iostream>
#include<set>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if(sum % 2 != 0){
        cout << "NO";
    }
    else{
        set<long long> s1;
        set<long long> s2;
        long long ss = 0;
        for(int i = n; i > 0; i--){
            if(ss + i <= sum / 2){
                ss += i;
                s1.insert(i);
            }
            else{
                s2.insert(i);
            }
        }
        cout << "YES\n";
        cout << s1.size() << "\n";
        for(auto& c : s1){
            cout << c << " ";
        }
        cout << "\n";
        cout << s2.size() << "\n";
        for(auto& c : s2){
            cout << c << " ";
        }
    }
}