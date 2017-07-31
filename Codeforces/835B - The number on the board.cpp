#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, sum_n = 0, diff, ans;
    string s;
    cin >> k >> s;
    for(int i = 0; i < s.size(); i++){
        sum_n += int(s[i] - '0');
    }
    if(sum_n >= k) cout << "0" << "\n";
    else{
        sort(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++){
            sum_n += 9 - int(s[i] - '0');
            if(sum_n >= k){
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
