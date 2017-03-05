#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, tmp, max_gcd, sz;
    string str;
    vector <int> num;
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin, str);
        stringstream ss;
        ss << str;
        for(int i = 0; ss >> tmp; i++)
            num.push_back(tmp);
        sz = num.size();
        max_gcd = 0;
        for(int i = 0; i < sz; i++){
            for(int j = i + 1; j < sz; j++){
                max_gcd = max(__gcd(num[i], num[j]), max_gcd);
            }
        }
        cout << max_gcd << "\n";
        num.clear();
    }
    return 0;
}
