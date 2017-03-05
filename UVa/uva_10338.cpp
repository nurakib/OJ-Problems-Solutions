#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(int n){
    ll ans = 1;
    for(int i = 1; i <= n; i++)
        ans *= i;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    ll n;
    string str;
    cin >> t;
    cin.ignore();
    for(int i = 1; i <= t; i++){
        int sz, cnt[26] = {0};
        getline(cin, str);
        sz = str.size();
        for(int j = 0; j < sz; j++){
            cnt[str[j] - 'A']++;
        }
        n = fact(sz);
        for(int i = 0; i < 26; i++){
            if(cnt[i] > 1)
                n /= fact(cnt[i]);
        }
        cout << "Data set " << i << ": " << n << "\n";
    }
    return 0;
}
